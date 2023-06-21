//���� 1~4������ Book Ŭ����
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
        cout << title << ' ' << price << "�� " << pages << " ������" << endl;
    };
    string getTitle() {
        return title;
    };
};

#endif  // BOOK_H
