//���� 11. ���� Ŭ���� Stack�� ����� Ǫ�ÿ����� <<�����ڸ�, ���� ���� >>�����ڸ�, ��� �ִ� ���������� �˱� ���� ! �����ڸ� �ۼ��϶�.

#include <iostream>
using namespace std;

class Stack {
	int s[100];
	int top;
public:
	Stack() { top = -1;}
	bool operator!() {
		if (top == -1) return true;
		else return false;
	}
	Stack& operator<<(int n) {
		s[++top] = n;
		return *this;
	}
	Stack& operator>>(int &n) {
		n=s[top--];
		return *this;
	}

};
int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}