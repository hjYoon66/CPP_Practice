//문제 1. 두 개의 Circle 객체를 교환하는 swap() 함수를 '참조에 의한 호출'이 되도록 작성하고 호출하는 프로그램을 작성하라
#include <iostream>
#include <string>


using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) {
		this->radius = radius;
	}
	void show() {
		cout << "반지름 : " << radius << endl;
	}
};
void swap(Circle& a, Circle& b) {
	Circle tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main() {
	Circle a(10), b(20);
	a.show();
	b.show();

	swap(a, b);
	a.show();
	b.show();
}