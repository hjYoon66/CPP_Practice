//���� 1. �� ���� Circle ��ü�� ��ȯ�ϴ� swap() �Լ��� '������ ���� ȣ��'�� �ǵ��� �ۼ��ϰ� ȣ���ϴ� ���α׷��� �ۼ��϶�
#include <iostream>
#include <string>


using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) {
		this->radius = radius;
	}
	void show() {
		cout << "������ : " << radius << endl;
	}
};
void swap(Circle& a, Circle& b) {
	Circle tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main() {
	Circle a(10), b(20);
	a.show();
	b.show();

	swap(a, b);
	a.show();
	b.show();
}