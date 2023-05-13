//���� 10-1. Ŭ������ ����ο� �����θ� �и��ϰ�, ��� �ڵ带 Calculator.cpp ���Ͽ� �ۼ��϶�.
#include <iostream>
#include <string>

using namespace std;

class Add {
private:
	int a;
	int b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a + b;
	}
};
class Sub {
private:
	int a;
	int b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a - b;
	}
};
class Mul {
private:
	int a;
	int b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a * b;
	}
};
class Div {
private:
	int a;
	int b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a / b;
	}
};
int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	while (true) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		int x, y;
		char op;
		cin >> x >> y >> op;

		switch (op) {
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}