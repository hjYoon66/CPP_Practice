//문제 11. 다음 코드에서 Box 클래스의 선언부와 구현부를 Box.h, Box.cpp 파일로 분리하고 
//main() 함수 부분을 main.cpp로 분리하여 전체 프로그램을 완성하라.
#include <iostream>
#include "Box.h"

using namespace std;

Box::Box(int w, int h) {
	setSize(w, h);
	fill = '*';
}
void Box::setFill(char f) {
	fill = f;
}
void Box::setSize(int w, int h) {
	width = w;
	height = h;
}

void Box::draw() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << fill;
		}
		cout << endl;
	}
}