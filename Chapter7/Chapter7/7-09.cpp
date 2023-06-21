//문제 9. 문제 8번의 Circle 객체에 대해 다음 연산이 가능하도록 연산자를 구현하라.(프렌드 함수로)

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원" << endl; }
	friend Circle operator+(int n, Circle c);
};
Circle operator+(int n, Circle c) {
	Circle tmp;
	tmp.radius = n + c.radius;
	return tmp;
}

int main() {
	Circle a(5), b(4);
	b = 1+a;
	a.show();
	b.show();
}