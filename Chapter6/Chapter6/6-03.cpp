//문제3. big()을 작성하고 프로그램을 완성하라

#include <iostream>
#include <string.h>

using namespace std;

int big(int a, int b, int max=100) {
	if (a > b) {
		if (max > a) return a;
			else return max;
		}
	else if (b > a) {
		if (max > b) return b;
		else return max;
	}
}
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
	return 0;
}