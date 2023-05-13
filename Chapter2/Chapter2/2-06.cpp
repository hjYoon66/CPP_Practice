//문제 6. 문자열을 두 개 입력받고 두 개의 문자열이 같은지 검사하는 프로그램을 작성하라. 만일 같으면 “같습니다”, 아니면 “같지 않습니다”를 출력하라.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char code1[10], code2[10];
	cout << "새 암호를 입력하세요>>";
	cin >> code1;
	cout << "새 암호를 다시 입력하세요>>";
	cin >> code2;
	if (strcmp(code1, code2) == 0)
		cout << "같습니다." << endl;
	else
		cout << "다릅니다" << endl;

}