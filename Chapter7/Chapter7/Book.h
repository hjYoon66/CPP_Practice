//문제 1~4까지의 Book 클래스
#ifndef BOOK_H
#define BOOK_H

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
};

#endif  // BOOK_H
