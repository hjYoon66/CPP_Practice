//문제 11. 스택 클래스 Stack을 만들고 푸시용으로 <<연산자를, 팝을 위해 >>연산자를, 비어 있는 스택인지를 알기 위해 ! 연산자를 작성하라.

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