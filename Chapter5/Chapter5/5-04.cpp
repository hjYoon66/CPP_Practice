//���� 5. �Ʒ��� ���� ������ �־��� bigger()�� �ۼ��ϰ� ����ڷκ��� 2���� ������ �Է¹޾� ū ���� ����ϴ� main()�� �ۼ��϶�.
//bigger()�� ���ڷ� �־��� a, b�� ������ true, �ƴϸ� false�� �����ϰ� ū ���� big�� �����Ѵ�.

#include <iostream>
#include <string>

using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		big = a;
		return big;
	}
	else {
		if (a > b) big = a;
		else big = b;
		
		return big;
	}
}
int main() {
	int a, b, big;
	cout << "���� 2�� >>";
	cin >> a >> b;
	bigger(a, b, big);
	cout << a << "�� " << b << "�� ū ���� " << big << "�Դϴ�." << endl;

}