//문제 7. 2차원 행렬을 추상화한 Matrix 클래스를 활용하는 다음 코드가 있다.
// <<, >> 연산자 함수를 Matrix의 멤버 함수로 구현하라.

#include <iostream>
using namespace std;

class Matrix {
	int m[4];
public:
	Matrix() :Matrix(0, 0, 0, 0) {};
	Matrix(int m1, int m2, int m3, int m4) {
		m[0] = m1;
		m[1] = m2;
		m[2] = m3;
		m[3] = m4;
	}
	void show() {
		cout << "Matrix = { " << m[0] << " " << m[1] << " " << m[2] << " " << m[3] << " }" << endl;
	}
	void operator>>(int mat[4]) {
		for (int i = 0; i < 4; i++)
			mat[i] = m[i];
	}
	Matrix& operator<<(int mat[4]) {
		for (int i = 0; i < 4; i++)
			m[i] = mat[i];
		return *this;
	}
};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x; // a의 각 원소를 배열 x에 복사, x[]={4,3,2,1}
	b << y; //배열 y의 원소 값을 b의 각 원소에 설정

	for (int i = 0; i < 4; i++) cout << x[i] << ' '; //x[] 출력
	cout << endl;
	b.show();
}