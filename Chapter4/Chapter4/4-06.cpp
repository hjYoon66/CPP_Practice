//문제 6. string 클래스를 이용하여 사용자가 입력한 영문 한 줄을 문자열로 입력받고 거꾸로 출력하는 프로그램을 작성하라

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	string str;

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0) break;
		
		reverse(str.begin(), str.end());
		cout << str << endl;
	}

	return 0;
}