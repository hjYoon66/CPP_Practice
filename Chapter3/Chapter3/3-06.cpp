//문제 6. 문제 5번을 참고하여 짝수 정수만 랜덤하게 발생시키는 EvenRandom 클래스를 작성하고 
//EvenRandom 클래스를 이용하여 10개의 짝수를 랜덤하게 출력하는 프로그램을 완성하라. 0도 짝수로 처리한다.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class EvenRandom {
	int seed = 0;
public:
	int next();
	int nextInRange(int start, int end);
};

int EvenRandom::next() {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand();
	} while (n % 2 == 1);
	return n;
}
int EvenRandom::nextInRange(int start, int end) {
	//srand((unsigned int)time(0));
	int n;
	do {
		n = rand() % (end - start + 1) + start;
	} while (n % 2 == 1);
	return n;
}

int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 10까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}