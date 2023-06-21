//문제 10. 통계를 내는 Statistics 클래스를 만들려고 한다. 데이터는 Statistics 클래스 내부에 int 배열을 동적으로 할당받아 유지한다.
//다음과 같은 연산이 잘 이루어지도록 Statistics 클래스와 !, >>, <<, ~ 연산자 함수를 작성하라

#include <iostream>
using namespace std;

class Statistics {
	int* statistics;
	int size;
public:
	Statistics(int size = 0) { this->size = size; this->statistics = new int[size]; }
	Statistics& operator<<(int x) {
		size++;
		Statistics tmp(size);
		for (int i = 0; i < size - 1; i++)
			tmp.statistics[i] = statistics[i];
		tmp.statistics[size - 1] = x;
		delete[] this->statistics;
		this->statistics = new int[size];
		for (int i = 0; i< size; i++)
			this->statistics[i] = tmp.statistics[i];
		return *this;
	}
	bool operator!() {
		if (size == 0) return true;
		else true;
	}
	Statistics& operator~() {
		for (int i = 0; i < size; i++)
			cout << statistics[i] << ' ';
		cout << endl;
		return *this;
	}
	Statistics& operator>>(int &avg) {
		int sum = 0;
		for (int i = 0; i < size; i++)
			sum += statistics[i];
		avg = sum / size;
		return *this;
	}
};
int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i]; //x[i] 값을 통계 객체에 삽입한다.
	stat << 100 << 200;  //100, 200을 통계 객체에 삽입한다.
	~stat; //통계 데이터를 모두 출력한다.

	int avg;
	stat >> avg;  //통계 객체로부터 평균을 받는다.
	cout << "avg = " << avg << endl;
}