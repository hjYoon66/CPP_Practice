//���� 6. ���ڿ��� �� �� �Է¹ް� �� ���� ���ڿ��� ������ �˻��ϴ� ���α׷��� �ۼ��϶�. ���� ������ �������ϴ١�, �ƴϸ� ������ �ʽ��ϴ١��� ����϶�.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char code1[10], code2[10];
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> code1;
	cout << "�� ��ȣ�� �ٽ� �Է��ϼ���>>";
	cin >> code2;
	if (strcmp(code1, code2) == 0)
		cout << "�����ϴ�." << endl;
	else
		cout << "�ٸ��ϴ�" << endl;

}