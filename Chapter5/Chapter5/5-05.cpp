//문제 5. Circle 객체 b를 a에 더하여 a를 키우고자 다음 함수를 작성하였다.
// main() 함수의 목적을 달성하도록 increaseBy() 함수를 수정하라.

#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; };
	int getRadius() { return radius; };
	void setRadius(int r) { radius = r; };
	void show() {
		cout << "반지름이 " << radius << "인 원" << endl;
	}
};
void increaseBy(Circle &a, Circle &b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}
int main() {
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}