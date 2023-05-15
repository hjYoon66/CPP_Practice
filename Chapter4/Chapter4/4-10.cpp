//문제 10. 다음에서 Person은 사람을, Family는 가족을 추상화한 클래스로서 완성되지 않은 클래스이다.
//main()이 작동하도록 Person과 Family 클래스에 필요한 멤버들을 추가하고 코드를 완성하라.


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Person {
	string name;
public:
	Person() { }
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class Family {
	Person* p;
	string familyName;
	int size;
public:
	Family(string name, int size);
	void show();
	void setName(int index, string name) { p[index].setName(name); }
	~Family();
};

Family::Family(string name, int size) {
	p = new Person[size];
	this->familyName = name;
	this->size = size;
}
void Family::show() {
	cout << familyName << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << '\t';
	}
	cout << endl;
}
Family::~Family() {
	delete[] p;
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr.Simpson");
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
	return 0;
}