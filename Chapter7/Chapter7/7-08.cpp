//문제 8. 원을 추상화한 Circle 클래스는 간단히 아래와 같다. 다음 연산이 가능하도록 연산자를 프렌드 함수로 작성하라

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원" << endl; }
	friend Circle& operator++(Circle &c);
	friend Circle operator++(Circle &c,int n);
};
Circle& operator++(Circle &c) {
	c.radius++;
	return c;
}
Circle operator++(Circle& c, int n) {
	Circle tmp = c;
	tmp.radius = c.radius++;
	return tmp;
}
int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}