//문제 7. 다음과 같이 “yes”가 입력될 때까지 종료하지 않는 프로그램을 작성하라. 사용자로부터의 입력은 cin.getline() 함수를 사용하라
#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100];
	while(true){
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(str, 100, '\n');

		if (strcmp(str, "yes") == 0) {
			cout << "종료합니다..." << endl;
			break;
		}
	}
}