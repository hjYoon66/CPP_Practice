//���� 11. å�� �̸��� ������ �����ϴ� ���� Book Ŭ������ ���� ������ ���Ͽ���

#include <iostream>
#include <string>

using namespace std;

class Book {
	string title;
	int price;
public:
	Book(string title, int price);
	Book(Book& b);
	~Book();
	void set(string tile, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
};
Book::Book(string title, int price) {
	this->title = title;
	this->price = price;
}
Book::Book(Book& b) {
	this->title = title;
	this->price = price;
}
Book::~Book() {

}
void Book::set(string title, int price) {
	this->title = title;
	this->price = price;
}


int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();

	return 0;
}