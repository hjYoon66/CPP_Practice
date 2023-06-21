//���� 2-1. Book ��ü�� Ȱ���ϴ� ����̴�. ������ == �����ڸ� friend �Լ��� �ۼ��϶�
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
    Book a("��ǰ C++", 30000, 500), b("��ǰ", 30000, 500);
    if (a == 30000) cout << "���� 30000��" << endl; //price ��
    if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; //å title ��
    if (a == b) cout << "�� å�� ���� å�Դϴ�. " << endl; //title, price, pages�� ��� ��
}