//문제 12. 컴퓨터의 주기억장치를 모델링하는 클래스 Ram을 구현하려고 한다. 
//Ram 클래스는 데이터가 기록될 메모리 공간과 크기 정보를 가지고, 주어진 주소에 데이터를 기록하고(write), 
//주어진 주소로부터 데이터를 읽어온다(read). Ram 클래스는 다음과 같이 선언된다. 
//실행결과를 참고하여 Ram.h, Ram.cpp, main.cpp로 헤더 파일과 cpp 파일을 분리하여 프로그램을 완성하라.

#include <iostream>
#include <string>
#include "Ram.h"

using namespace std;

Ram::Ram() {
	for (int i = 0; i < 100 * 1024; i++) {
		mem[i] = 0;
	}
	size = 100 * 1024;
}
Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}