//���� 14. Ŀ�Ǹ� �ֹ��ϴ� ������ C++ ���α׷��� �ۼ��غ���. Ŀ�� ������ �����������ҡ�, ���Ƹ޸�ī�롱, ��īǪġ�롱�� 3�����̸� 
// ������ ���� 2000��, 2300��, 2500���̴�. �Ϸ翡 20000�� �̻� ���� �Ǹ� ī�並 �ݴ´�.
//���� ����� ���� �۵��ϴ� ���α׷��� �ۼ��϶�.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char menu[100];
	int num, total = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";

	while (true)
	{
		cout << "�ֹ�>>";
		cin >> menu >> num;

		if (strcmp(menu, "����������") == 0)
		{
			cout << 2000 * num << "���Դϴ�. ���ְ� �弼��\n";
			total += 2000 * num;
		}
		else if (strcmp(menu, "�Ƹ޸�ī��") == 0)
		{
			cout << 2300 * num << "���Դϴ�. ���ְ� �弼��\n";
			total += 2300 * num;
		}
		else if (strcmp(menu, "īǪġ��") == 0)
		{
			cout << 2500 * num << "���Դϴ�. ���ְ� �弼��\n";
			total += 2500 * num;
		}
		else {}

		if (total >= 20000)
		{
			cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
			break;
		}
	}

	return 0;
}