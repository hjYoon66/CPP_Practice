//���� 3. string Ŭ������ �̿��Ͽ� ��ĭ�� �����ϴ� ���ڿ��� �Է¹ް� ���ڿ����� 'a'�� � �ִ��� ����ϴ� ���α׷��� �ۼ��غ���
//at()�� []�� �̿��Ͽ� �ۼ��϶�
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int cnt = 0;

	cout << "���ڿ� �Է�>>";
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a')
			cnt++;
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�.";
}