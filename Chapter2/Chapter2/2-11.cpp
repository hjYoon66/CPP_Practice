//���� 11. ���� C ���α׷��� C++ ���α׷����� �����Ͽ� �����϶�.
#include <iostream>
#include <string>
using namespace std;

int main() {
	int last;
	int sum = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> last;
	for (int i = 0; i <= last; i++) {
		sum += i;
	}
	cout << "1���� " << last << "������ ���� " << sum << " �Դϴ�." << endl;
}
