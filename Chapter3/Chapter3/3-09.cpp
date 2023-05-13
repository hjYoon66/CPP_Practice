//문제 9. Oval 클래스는 주어진 사각형에 내접하는 타원을 추상화한 클래스이다.
//Oval 클래스의 멤버는 모두 다음과 같다. Oval 클래스를 선언부와 구현부로 나누어 작성하라.

#include <iostream>
#include <string>

using namespace std;

class Oval {
private:
	int width;
	int height;
public:
	Oval(int width, int height);
	Oval();
	~Oval();
	void show();
	void set(int width, int height);
	int getWidth();
	int getHeight();
};
Oval::Oval() {
	width = height = 1;
}
Oval::Oval(int width, int height) {
	this->width = width;
	this->height = height;
}
Oval::~Oval() {
	cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}
void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
}
void Oval::set(int width, int height) {
	this->width = width;
	this->height = height;
}
int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;

	return 0;
}
