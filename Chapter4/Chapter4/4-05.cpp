//문제 5. string 클래스를 이용하여 사용자가 입려한 영문 한 줄을 입력받고 글자 하나만 랜덤하게 수정하여 출력하는 프로그램을 작성하라

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	string str;

	while (true) {
		cout << "아래에 한 줄을 입력하세요(exit을 입력하면 종료합니다.)" << endl;
		getline(cin, str);
		if (str.compare("exit") == 0) break;

		srand((unsigned)time(0));
		int n = rand() % (str.length());

		srand((unsigned)time(0));
		char ch = 'a' + rand() % 26;

		str[n] = ch;

		cout << ">>" << str << endl;
	}

	return 0;
}