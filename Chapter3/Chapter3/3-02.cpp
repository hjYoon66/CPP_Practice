//���� 2.��¥�� �ٷ�� Date Ŭ������ �ۼ��ϰ����Ѵ�. 
//Date�� �̿��ϴ� main()�� ���� ����� ������ ����. Ŭ���� Date�� �ۼ��Ͽ� �Ʒ� ���α׷��� �߰��϶�.
#include <iostream>
#include <string>
using namespace std;

class Date {
public:
	int year;
	int month;
	int day;
	Date(int year, int month, int day);
	Date(string date);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}
Date::Date(string date) {
	int index;
	this->year = stoi(date);

	index = date.find('/');
	this->month = stoi(date.substr(index + 1));

	index = date.find('/', index + 1);
	this->day = stoi(date.substr(index + 1));
}
void Date::show() {
	cout << year << "��" << month << "��" << day << "��" << endl;
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}
int main() {
	Date birth(2014, 3, 20);
	Date independencyDay("1945/8/15");
	independencyDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}