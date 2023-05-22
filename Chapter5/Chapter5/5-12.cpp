//문제 12. 학과를 나타내는 Dept 클래스를 모두 구현하고, 전체 프로그램을 완성하라.

#include <iostream>
#include <string>

using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	Dept(Dept& dept);
	~Dept();
	int getSize() { return size; }
	void read();
	bool isOver60(int index);
};
Dept::Dept(Dept& dept) {
	this->size = dept.size;
	this->scores = new int[size];
	for (int i = 0; i < this->size; i++) {
		this->scores[i] = dept.scores[i];
	}
}
Dept::~Dept() {
	delete[]scores;
}
void Dept::read() {
	cout << "10개 점수 입력>>";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}
bool Dept::isOver60(int index) {
	if (scores[index] >= 60) return true;
	else return false;
}

int countPass(Dept dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i))count++;
	}
	return count;
}

int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명";

	return 0;
}