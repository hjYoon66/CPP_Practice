//���� 7. ������ ���� ��yes���� �Էµ� ������ �������� �ʴ� ���α׷��� �ۼ��϶�. ����ڷκ����� �Է��� cin.getline() �Լ��� ����϶�
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100];
	while(true){
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin.getline(str, 100, '\n');

		if (strcmp(str, "yes") == 0) {
			cout << "�����մϴ�..." << endl;
			break;
		}
	}
}