//���� 10.���ڿ��� �ϳ� �Է¹ް� ���ڿ��� �κ� ���ڿ��� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�. ���ô� ������ ����.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100];
	cout << "���ڿ� �Է�>>";
	cin.getline(str, 100, '\n');

	for (int i = 0; i < strlen(str); i++) {
		for (int j = 0; j <= i; j++) {
			cout << str[j];
		}
		cout << endl;
	}
}