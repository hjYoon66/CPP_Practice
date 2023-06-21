//����5. ���� main()���� Color Ŭ������ 3��ҷ� �ϳ��� ���� ��Ÿ���� Ŭ�����̴�. +�����ڷ� ���� ���ϰ�, ==�����ڷ� ���� ���ϰ��� �Ѵ�.
// ���� ����� �����Ͽ� Color Ŭ������ ������, �׸��� ���α׷��� �ϼ��϶�
//+�� == �����ڸ� Color Ŭ������ ������ �Լ��� �����϶�.

#include <iostream>
using namespace std;
class Color {
	int red, green, blue;
public:
	Color() {};
	Color(int red, int green, int blue) { this->red = red; this->green = green; this->blue = blue; }
	void show();
	friend Color operator+(Color a,Color b);
	friend bool operator==(Color a,Color b);
};
void Color::show() {
	cout << red << " " << green << " " << blue << endl;
}
Color operator+(Color a,Color b) {
	Color c;
	c.red = a.red + b.red;
	c.green = a.green + b.green;
	c.blue = a.blue + b.blue;
	return c;
}
bool operator==(Color a,Color b) {
	if (a.red == b.red && a.green == b.green && a.blue == b.blue) return true;
	else return false;
}
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "����� ����";
	else
		cout << "����� �ƴ�";
}