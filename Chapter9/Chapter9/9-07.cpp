//문제 7. Shape 클래스를 상속받아 타원을 표현하는 Oval, 사각형을 표현하는 Rect, 삼각형을 표현하는
//Triangle 클래스를 작성하라. main()을 작성하고 실행하면 다음과 같다.

#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
	string name;
	int width, height;
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; }
	string getName() { return name; }
};
class Oval :public Shape {
public:
	Oval(string n, int w, int h) :Shape(n, w, h) {};
	double getArea() {
		return 3.14 * width * height;
	}
};
class Rect :public Shape {
public:
	Rect(string n, int w, int h) :Shape(n, w, h) {};
	double getArea() {
		return width * height;
	}
};
class Triangle :public Shape {
public:
	Triangle(string n, int w, int h) :Shape(n, w, h) {};
	double getArea() {
		return (width * height) * 0.5;
	}
};

int main() {
	Shape* p[3];
	p[0] = new Oval("빈대떡",10,20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangle("토스트", 30, 40);
	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;

	for (int i = 0; i < 3; i++) delete p[i];
}