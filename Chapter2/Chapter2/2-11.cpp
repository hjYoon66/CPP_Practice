//문제 11. 다음 C 프로그램을 C++ 프로그램으로 수정하여 실행하라.
#include <iostream>
#include <string>
using namespace std;

int main() {
	int last;
	int sum = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> last;
	for (int i = 0; i <= last; i++) {
		sum += i;
	}
	cout << "1에서 " << last << "까지의 합은 " << sum << " 입니다." << endl;
}
