//���� 7. 2���� ����� �߻�ȭ�� Matrix Ŭ������ Ȱ���ϴ� ���� �ڵ尡 �ִ�.
// <<, >> ������ �Լ��� Matrix�� friend �Լ��� �����϶�.

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
	friend void operator>>(Matrix mat1, int mat2[4]);
	friend Matrix& operator<<(Matrix& mat1, int mat2[4]);
	
};
void operator>>(Matrix mat1, int mat2[4]) {
	for (int i = 0; i < 4; i++)
		mat2[i] = mat1.m[i];
}
Matrix& operator<<(Matrix& mat1,int mat2[4]) {
	for (int i = 0; i < 4; i++)
		mat1.m[i] = mat2[i];
	return mat1;
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x; // a�� �� ���Ҹ� �迭 x�� ����, x[]={4,3,2,1}
	b << y; //�迭 y�� ���� ���� b�� �� ���ҿ� ����

	for (int i = 0; i < 4; i++) cout << x[i] << ' '; //x[] ���
	cout << endl;
	b.show();
}