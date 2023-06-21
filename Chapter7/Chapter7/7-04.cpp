//���� 4. ���� ������ ���� å�� ������ ���� ������ ���ϰ��� �Ѵ�. < �����ڸ� �ۼ��϶�
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
        cout << title << ' ' << price << "�� " << pages << " ������" << endl;
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
    if (str.compare(a.title) < 0) return true; //str�� a���� ���������� �տ� ���� ��
    else return false;

}

int main() {
    Book a("û��", 20000, 300);
    string b;
    cout << "å �̸��� �Է��ϼ���";
    getline(cin, b);
    if (b < a)
        cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}