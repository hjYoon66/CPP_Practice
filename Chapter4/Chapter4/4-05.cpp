//���� 5. string Ŭ������ �̿��Ͽ� ����ڰ� �Է��� ���� �� ���� �Է¹ް� ���� �ϳ��� �����ϰ� �����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	string str;

	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ���(exit�� �Է��ϸ� �����մϴ�.)" << endl;
		getline(cin, str);
		if (str.compare("exit") == 0) break;

		srand((unsigned)time(0));
		int n = rand() % (str.length());

		srand((unsigned)time(0));
		char ch = 'a' + rand() % 26;

		str[n] = ch;

		cout << ">>" << str << endl;
	}

	return 0;
}