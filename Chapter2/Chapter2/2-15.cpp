//���� 15. ����, ����, ����, ������, �������� ���� 5Ģ ������ �� �� �ִ� ���α׷��� �ۼ��϶�. 
//���� ������ ���� �������� �Էµȴ�. ������ �����ڴ� �ϳ��� ��ĭ���� �и��ȴ�.
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
