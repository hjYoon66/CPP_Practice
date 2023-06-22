//문제 8. 문제 7에 주어진 Shape 클래스를 추상 클래스로 만들고 문제 7을 다시 작성하라.

#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
	string name;
	int width, height;
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() = 0;
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
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangle("토스트", 30, 40);
	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;

	for (int i = 0; i < 3; i++) delete p[i];
}