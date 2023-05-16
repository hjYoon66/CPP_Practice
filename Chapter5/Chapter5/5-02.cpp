//문제 2. main() 함수와 실행 결과를 참고하여 half() 함수를 작성하라.

#include <iostream>
#include <string>

using namespace std;

void half(double& n) {
	n /= 2;
}
int main() {
	double n = 20;
	half(n);
	cout << n;
}