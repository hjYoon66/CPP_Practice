//문제 4. 다음 연산을 통해 책의 제목을 사전 순으로 비교하고자 한다. < 연산자를 작성하라
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
    friend bool operator<(string str, Book a);
        
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
bool operator<(string str, Book a) {
    if (str.compare(a.title) < 0) return true; //str이 a보다 사전적으로 앞에 있을 때
    else return false;

}

int main() {
    Book a("청춘", 20000, 300);
    string b;
    cout << "책 이름을 입력하세요";
    getline(cin, b);
    if (b < a)
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}