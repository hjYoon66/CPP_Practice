//문제 5. <Enter> 키가 입력될 때까지 문자들을 읽고, 입력된 문자 ‘x’의 개수를 화면에 출력하라.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100];
	int cnt=0;

	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(str, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (str[i] == 'x')
			cnt++;
	}
	cout << "x의 개수는 " << cnt << endl;
}