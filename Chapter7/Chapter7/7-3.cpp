//문제 3. 다음 연산을 통해 공짜 책인지를 판별하도록 !연산자를 작성하라.
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
    friend bool operator==(Book a, int price);
    friend bool operator==(Book a, string title);
    friend bool operator==(Book a, Book& b);
    bool operator!() {
        if (this->price == 0) return true;
        else return false;
    }
};
bool operator==(Book a, int price) {
    if (a.price == price) return true;
    else return false;
}
bool operator==(Book a, string title) {
    if (a.title == title) return true;
    else return false;
}
bool operator==(Book a, Book& b) {
    if (a.title == b.title && a.price == b.price && a.pages == b.pages) return true;
    else return false;
}
int main() {
    Book book("벼룩시장", 0, 50);
    if (!book) cout << "공짜다" << endl;
}