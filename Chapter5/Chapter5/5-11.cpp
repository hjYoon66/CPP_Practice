//문제 11. 책의 이름과 가격을 저장하는 다음 Book 클래스에 대해 물음에 답하여라

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
	void show() { cout << title << ' ' << price << "원" << endl; }
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
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();

	return 0;
}