//���� 13. �߽Ĵ��� �ֹ� ������ C++ ���α׷����� �ۼ��غ���. ���� ���� ����� ���� �޴��� ��� ���� �Է¹ް� �̸� ����ϸ� �ȴ�. 
//�߸��� �Է��� �������� �κе� �ڵ忡 �߰��϶�.
#include <iostream>
#include <string>
using namespace std;

int main() {
	int select, person;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;

	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> select;
		if (select < 0 || select > 4) {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
			continue;
		}
			

		if (select == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}

		cout << "���κ�?";
		cin >> person;

		switch (select) {
		case 1:
			cout << "«�� " << person << "�κ� ���Խ��ϴ�." << endl;
			break;
		case 2:
			cout << "¥�� " << person << "�κ� ���Խ��ϴ�." << endl;
			break;
		case 3:
			cout << "������ " << person << "�κ� ���Խ��ϴ�." << endl;
			break;
		default:
			break;
		}
	}
}