//���� 6. ���� 5���� �����Ͽ� ¦�� ������ �����ϰ� �߻���Ű�� EvenRandom Ŭ������ �ۼ��ϰ� 
//EvenRandom Ŭ������ �̿��Ͽ� 10���� ¦���� �����ϰ� ����ϴ� ���α׷��� �ϼ��϶�. 0�� ¦���� ó���Ѵ�.
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
	cout << "-- 0���� " << RAND_MAX << "������ ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 10������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}