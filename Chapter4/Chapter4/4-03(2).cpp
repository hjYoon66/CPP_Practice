//문제 3. string 클래스를 이용하여 빈칸을 포함하는 문자열을 입력받고 문자열에서 'a'가 몇개 있는지 출력하는 프로그램을 작성해보자
//string 클래스의 find() 멤버 함수를 이용하여 작성하라
#include <iostream>
#include <string>

using namespace std;


int main() {
	string str;
	int cnt = 0,ind=0;

	cout << "문자열 입력>>";
	getline(cin, str);

	while (true) {
		ind = str.find('a', ind+1);
		if (ind == -1) break;
		else cnt++;
	}
	cout << "문자 a는 " << cnt << "개 있습니다.";
}
