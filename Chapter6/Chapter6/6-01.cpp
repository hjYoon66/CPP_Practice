//문제 1. add() 함수를 호출하는 main() 함수는 다음과 같다. add() 함수를 중복 작성하고 프로그램을 완성하라

#include <iostream>
#include <string.h>

using namespace std;

int add(int* a, int size, int* b = NULL) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];

	if (b != NULL) {
		for (int i = 0; i < size; i++)
			sum += b[i];
	}
	return sum;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
	return 0;
}
