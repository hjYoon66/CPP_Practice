//���� 4. �Ҽ����� ������ 5���� �Ǽ��� �Է� �޾� ���� ū ���� ȭ�鿡 ����϶�.
#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;
	float max = 0;

	cout << "5���� �Ǽ��� �Է��϶�>>";
	cin >> a >> b >> c >> d >> e;

	if (max < a)
		max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (max < d)
		max = d;
	if (max < e)
		max = e;

	cout << "���� ū �� = " << max;
}