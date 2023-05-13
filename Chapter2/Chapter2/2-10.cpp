//문제 10.문자열을 하나 입력받고 문자열의 부분 문자열을 다음과 같이 출력하는 프로그램을 작성하라. 예시는 다음과 같다.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100];
	cout << "문자열 입력>>";
	cin.getline(str, 100, '\n');

	for (int i = 0; i < strlen(str); i++) {
		for (int j = 0; j <= i; j++) {
			cout << str[j];
		}
		cout << endl;
	}
}