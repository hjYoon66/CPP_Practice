//���� 9. �̸�, �ּ�, ���̸� �Է¹޾� �ٽ� ����ϴ� ���α׷��� �ۼ��϶�. ���� ���ô� ������ ����.
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string address;
	int age;

	cout << "�̸���?";
	getline(cin, name);

	cout << "�ּҴ�?";
	getline(cin, address);

	cout << "���̴�?";
	cin >> age;

	cout << name << ", " << address << ", " << age << "��" << endl;
}