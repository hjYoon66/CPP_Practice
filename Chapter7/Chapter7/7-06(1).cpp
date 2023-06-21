//문제6. 2차원 행렬을 추상화한 Matrix 클래스를 작성하고, show() 멤버 함수와 다음 연산이 가능하도록 연산자를 모두 구현하라.
//연산자 함수를 Matrix의 멤버 함수로 구현하라.
#include <iostream>
using namespace std;

class Matrix {
	int m[2][2];
public:
	Matrix() :Matrix(0, 0, 0, 0) {};
	Matrix(int m1, int m2, int m3, int m4) {
		m[0][0] = m1;
		m[0][1] = m2;
		m[1][0] = m3;
		m[1][1] = m4;
	}
	void show() {
		cout << "Matrix = { " << m[0][0] << " " << m[0][1] << " " << m[1][0] << " " << m[1][1] << " }" << endl;
	}
	Matrix operator+(Matrix m1) {
		Matrix tmp;
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				tmp.m[i][j] = m[i][j] + m1.m[i][j];
		return tmp;
	}
	Matrix operator+=(Matrix& m1) {
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				m[i][j] += m1.m[i][j];
		return* this;
	}
	bool operator==(Matrix m1) {
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				if (m[i][j] != m1.m[i][j]) return false;
		return true;
	}
};
int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}