//문제 14. 커피를 주문하는 간단한 C++ 프로그램을 작성해보자. 커피 종류는 “에스프레소”, “아메리카노”, “카푸치노”의 3가지이며 
// 가격은 각각 2000원, 2300원, 2500원이다. 하루에 20000원 이상 벌게 되면 카페를 닫는다.
//실행 결과와 같이 작동하는 프로그램을 작성하라.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char menu[100];
	int num, total = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

	while (true)
	{
		cout << "주문>>";
		cin >> menu >> num;

		if (strcmp(menu, "에스프레소") == 0)
		{
			cout << 2000 * num << "원입니다. 맛있게 드세요\n";
			total += 2000 * num;
		}
		else if (strcmp(menu, "아메리카노") == 0)
		{
			cout << 2300 * num << "원입니다. 맛있게 드세요\n";
			total += 2300 * num;
		}
		else if (strcmp(menu, "카푸치노") == 0)
		{
			cout << 2500 * num << "원입니다. 맛있게 드세요\n";
			total += 2500 * num;
		}
		else {}

		if (total >= 20000)
		{
			cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
			break;
		}
	}

	return 0;
}