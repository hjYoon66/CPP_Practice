//문제 13. 중식당의 주문 과정을 C++ 프로그램으로 작성해보자. 다음 실행 결과와 같이 메뉴와 사람 수를 입력받고 이를 출력하면 된다. 
//잘못된 입력을 가려내는 부분도 코드에 추가하라.
#include <iostream>
#include <string>
using namespace std;

int main() {
	int select, person;
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;

	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> select;
		if (select < 0 || select > 4) {
			cout << "다시 주문하세요!!" << endl;
			continue;
		}
			

		if (select == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}

		cout << "몇인분?";
		cin >> person;

		switch (select) {
		case 1:
			cout << "짬뽕 " << person << "인분 나왔습니다." << endl;
			break;
		case 2:
			cout << "짜장 " << person << "인분 나왔습니다." << endl;
			break;
		case 3:
			cout << "군만두 " << person << "인분 나왔습니다." << endl;
			break;
		default:
			break;
		}
	}
}