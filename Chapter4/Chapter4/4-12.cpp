//문제 12. Circle 클래스와 이들을 배열로 관리하는 CircleManager클래스
// 키보드에서 원의 개수를 입력받고, 그 개수만큼 원의 이름과 반지름을 입력받고, 다음과 같이 실행되도록 main 함수를 작성하라.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name; this->radius = radius;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size) { p = new Circle[size]; this->size = size; }
	~CircleManager() { delete[] p; }
	Circle* getCircle() { return p; }
	void searchByName();
	void searchByArea();
};
void CircleManager::searchByName() {
	string find;
	cout << "검색하고자 하는 원의 이름 >>";
	cin >> find;
	for (int i = 0; i < size; i++) {
		if (find == p[i].getName()) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
}
void CircleManager::searchByArea() {
	int minArea;
	cout << "최소 면적의 정수를 입력하세요 >> ";
	cin >> minArea;
	cout << minArea << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > minArea) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
		}
	}
	cout << endl;
}

int main() {
	int num;
	cout << "원의 개수 >> ";
	cin >> num;

	CircleManager circles(num);

	for (int i = 0; i < num; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		string name;
		int r;
		cin >> name >> r;
		circles.getCircle()[i].setCircle(name, r);
	}
	circles.searchByName();
	circles.searchByArea();

	return 0;
}

