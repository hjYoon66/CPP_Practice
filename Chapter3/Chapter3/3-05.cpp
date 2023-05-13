//문제 5. 랜덤 수를 발생시키는 Random 클래스를 만들자. 
//Random 클래스를 이용하여 랜덤한 정수를 10개 출력하는 사례는 다음과 같다. 
//Random 클래스가 생성자, next(), nextInRange()의 3개의 멤버 함수를 가지도록 작성하고 main() 함수와 합쳐 하나의 cpp 파일에 구현하라.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
private:
	int seed = 0;
public:
	int next();
	int nextInRange(int start,int end);
};
int Random::next() {
	//srand((unsigned)time(0));
	int n = rand();
	return n;
}
int Random::nextInRange(int start, int end) {
	//srand((unsigned)time(0));
	int n = rand() % (end - start + 1) + start;
	return n;

}


int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 4까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}