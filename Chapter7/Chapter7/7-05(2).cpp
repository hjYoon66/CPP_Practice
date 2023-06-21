//문제5. 다음 main()에서 Color 클래스는 3요소로 하나의 색을 나타내는 클래스이다. +연산자로 색을 더하고, ==연산자로 색을 비교하고자 한다.
// 실행 결과를 참고하여 Color 클래스와 연산자, 그리고 프로그램을 완성하라
//+와 == 연산자를 Color 클래스의 프렌드 함수로 구현하라.

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
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}