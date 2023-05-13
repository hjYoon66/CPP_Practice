//문제 8. 한 라인에 ‘;’으로 5개의 이름을 구분하여 입력받아, 각 이름을 끊어내어 화면에 출력하고 가장 긴 이름을 판별하라.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100],max[100];
	int cnt = 0;

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cin.getline(str, 100, ';');
		cout << i + 1 << " : " << str << endl;

		if (strlen(str) > cnt) {
			strcpy_s(max, str);
			cnt = strlen(str);
		}
	}
	cout << "가장 긴 이름은 " << max << endl;
}