//문제 12. 다음 C 프로그램을 C++ 프로그램으로 수정하여 실행하라. 이 프로그램의 실행 결과는 연습문제 11과 같다.
#include <iostream>
#include <string>
using namespace std;

int sum(int a);

int main(){
	int last = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> last;

	cout << "1에서 " << last << "까지의 합은 " << sum(last) << " 입니다." << endl;

}
int sum(int a) {
	int k, res = 0;
	for (k = 0; k <= a; k++) {
		res += k;
	}
	return res;
}