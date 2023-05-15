//문제 9. Person 클래스가 있다. Person 클래스와 main 함수를 작성하여, 3개의 Person 객체를 가지는 배열을 선언하고,
//다음과 같이 키보드에서 이를 입력받아 출력하고 검색하는 프로그램을 완성하라.

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
	cout << "이름과 전화 번호를 입력해주세요<<"<<endl;
	
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		string name, tel;
		cin >> name >> tel;
		person[i].set(name, tel);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << person[i].getName() << ' ';
	}
	cout << endl;
}