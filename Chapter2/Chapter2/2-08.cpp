//���� 8. �� ���ο� ��;������ 5���� �̸��� �����Ͽ� �Է¹޾�, �� �̸��� ����� ȭ�鿡 ����ϰ� ���� �� �̸��� �Ǻ��϶�.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100],max[100];
	int cnt = 0;

	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cin.getline(str, 100, ';');
		cout << i + 1 << " : " << str << endl;

		if (strlen(str) > cnt) {
			strcpy_s(max, str);
			cnt = strlen(str);
		}
	}
	cout << "���� �� �̸��� " << max << endl;
}