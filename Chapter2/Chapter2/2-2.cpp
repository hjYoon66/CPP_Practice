﻿//문제2. cout과 « 연산자를 이용하여 다음과 같이 구구단을 출력하는 프로그램을 작성하라.
#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << j << "X" << i << "="<<i * j<<"\t";
		}
		cout << endl;
	}
}