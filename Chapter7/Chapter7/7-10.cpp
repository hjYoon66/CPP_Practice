//���� 10. ��踦 ���� Statistics Ŭ������ ������� �Ѵ�. �����ʹ� Statistics Ŭ���� ���ο� int �迭�� �������� �Ҵ�޾� �����Ѵ�.
//������ ���� ������ �� �̷�������� Statistics Ŭ������ !, >>, <<, ~ ������ �Լ��� �ۼ��϶�

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
	if (!stat) cout << "���� ��� �����Ͱ� �����ϴ�." << endl;

	int x[5];
	cout << "5���� ������ �Է��϶�";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i]; //x[i] ���� ��� ��ü�� �����Ѵ�.
	stat << 100 << 200;  //100, 200�� ��� ��ü�� �����Ѵ�.
	~stat; //��� �����͸� ��� ����Ѵ�.

	int avg;
	stat >> avg;  //��� ��ü�κ��� ����� �޴´�.
	cout << "avg = " << avg << endl;
}