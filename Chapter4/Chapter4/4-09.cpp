//���� 9. Person Ŭ������ �ִ�. Person Ŭ������ main �Լ��� �ۼ��Ͽ�, 3���� Person ��ü�� ������ �迭�� �����ϰ�,
//������ ���� Ű���忡�� �̸� �Է¹޾� ����ϰ� �˻��ϴ� ���α׷��� �ϼ��϶�.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTal() { return tel; }
	void set(string name, string tel);
};
Person::Person() {

}
void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}
int main() {
	Person person[3];
	cout << "�̸��� ��ȭ ��ȣ�� �Է����ּ���<<"<<endl;
	
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		string name, tel;
		cin >> name >> tel;
		person[i].set(name, tel);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << person[i].getName() << ' ';
	}
	cout << endl;
}