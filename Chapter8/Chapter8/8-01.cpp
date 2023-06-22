//문제 1. 다음 코드가 실행되도록 Circle을 상속받은 NamedCircle 클래스를 작성하고 전체 프로그램을 완성하라

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int r = 0, string name = ""):Circle(r) {
		this->name = name;
	}
	void show() {
		cout << "반지름이 " << getRadius() << "인 " << name << endl;
	}
};
int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show();
}