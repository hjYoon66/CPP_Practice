//���� 2. main() �Լ��� ���� ����� �����Ͽ� half() �Լ��� �ۼ��϶�.

#include <iostream>
#include <string>

using namespace std;

void half(double& n) {
	n /= 2;
}
int main() {
	double n = 20;
	half(n);
	cout << n;
}