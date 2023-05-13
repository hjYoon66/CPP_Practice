//문제 15. 덧셈, 뺄셈, 곱셈, 나눗셈, 나머지의 정수 5칙 연산을 할 수 있는 프로그램을 작성하라. 
//식은 다음과 같은 형식으로 입력된다. 정수와 연산자는 하나의 빈칸으로 분리된다.
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b,result;
	char op;

	while (1) {
		cout << "?";
		cin >> a >> op >> b;

		switch (op) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
		case '%':
			result = a % b;
			break;
		default:
			break;
		}
		cout << a << " " << op << " " << b << " = " << result << endl;
	}
}
