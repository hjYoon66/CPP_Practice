//���� 9. Oval Ŭ������ �־��� �簢���� �����ϴ� Ÿ���� �߻�ȭ�� Ŭ�����̴�.
//Oval Ŭ������ ����� ��� ������ ����. Oval Ŭ������ ����ο� �����η� ������ �ۼ��϶�.

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
	cout << "Oval �Ҹ� : width = " << width << ", height = " << height << endl;
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
