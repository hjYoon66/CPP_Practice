//���� 2. ������ ���� �迭�� �����Ͽ� ���� ���� ����� �������� Circl�� ��ӹ��� NamedCircle Ŭ������ main() �Լ� �� �ʿ��� �Լ��� �ۼ��϶�

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
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}
	string getName() {
		return name;
	}
	void setName(string name) { this->name = name; }
	
};
int main() {
	NamedCircle pizza[5];
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;
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
	cout << "���� ������ ū ���ڴ� " << pizza[maxInd].getName() << "�Դϴ�.";
}