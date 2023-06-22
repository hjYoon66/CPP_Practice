//문제 2. 다음과 같이 배열을 선언하여 다음 실행 결과가 나오도록 Circl을 상속받은 NamedCircle 클래스와 main() 함수 등 필요한 함수를 작성하라

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int r = 0, string name = "") :Circle(r) {
		this->name = name;
	}
	void show() {
		cout << "반지름이 " << getRadius() << "인 " << name << endl;
	}
	string getName() {
		return name;
	}
	void setName(string name) { this->name = name; }
	
};
int main() {
	NamedCircle pizza[5];
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">>";
		int r;
		string name;
		cin >> r >> name;
		pizza[i].setRadius(r);
		pizza[i].setName(name);
	}
	int max = 0, maxInd;
	for (int i = 0; i < 5; i++) {
		if (pizza[i].getArea() > max) {
			max = pizza[i].getArea();
			maxInd = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[maxInd].getName() << "입니다.";
}