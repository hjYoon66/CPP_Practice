//���� 12. ���� C ���α׷��� C++ ���α׷����� �����Ͽ� �����϶�. �� ���α׷��� ���� ����� �������� 11�� ����.
#include <iostream>
#include <string>
using namespace std;

int sum(int a);

int main(){
	int last = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> last;

	cout << "1���� " << last << "������ ���� " << sum(last) << " �Դϴ�." << endl;

}
int sum(int a) {
	int k, res = 0;
	for (k = 0; k <= a; k++) {
		res += k;
	}
	return res;
}