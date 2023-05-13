//���� 5. ���� ���� �߻���Ű�� Random Ŭ������ ������. 
//Random Ŭ������ �̿��Ͽ� ������ ������ 10�� ����ϴ� ��ʴ� ������ ����. 
//Random Ŭ������ ������, next(), nextInRange()�� 3���� ��� �Լ��� �������� �ۼ��ϰ� main() �Լ��� ���� �ϳ��� cpp ���Ͽ� �����϶�.
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
	cout << "-- 0���� " << RAND_MAX << "������ ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 4������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}