//���� 7. Circle Ŭ������ �ְ�, Circle Ŭ������ main �Լ��� �ۼ��ϰ� 3���� Circle ��ü�� ���� �迭�� �����ϰ�, 
// ������ ���� �Է¹ް� ������ 100���� ū ���� ������ ����ϴ� ���α׷��� �ϼ��϶�

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle circles[3];
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		int r;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		circles[i].setRadius(r);
		
		if (circles[i].getArea() > 100) { 
			cnt++;
		}
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�." << endl;

}