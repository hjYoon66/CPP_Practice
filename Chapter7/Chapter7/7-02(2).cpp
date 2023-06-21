//문제 2-1. Book 객체를 활용하는 사례이다. 세개의 == 연산자를 friend 함수로 작성하라
#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price, pages;

public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    };
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    };
    string getTitle() {
        return title;
    };
    Book& operator+=(int price) {
        this->price += price;
        return *this;
    }
    Book& operator-=(int price) {
        this->price -= price;
        return *this;
    }
    friend bool operator==(Book a,int price);
    friend bool operator==(Book a,string title);
    friend bool operator==(Book a,Book& b);
};
bool operator==(Book a,int price) {
    if (a.price == price) return true;
    else false;
}
bool operator==(Book a,string title) {
    if (a.title == title) return true;
    else return false;
}
bool operator==(Book a,Book& b) {
    if (a.title == b.title && a.price == b.price && a.pages == b.pages) return true;
    else return false;
}
int main() {
    Book a("명품 C++", 30000, 500), b("고품", 30000, 500);
    if (a == 30000) cout << "정가 30000원" << endl; //price 비교
    if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; //책 title 비교
    if (a == b) cout << "두 책이 같은 책입니다. " << endl; //title, price, pages를 모두 비교
}