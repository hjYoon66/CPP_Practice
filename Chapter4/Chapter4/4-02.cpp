//���� 2. ���� ���� 5���� �迭�� ���� �Ҵ� �ް�, ������ 5�� �Է¹޾� ����� ���ϰ� ����� �� �ӹ迭�� �Ҹ��Ű���� 
//main �Լ��� �ۼ��ض�
#include <iostream>
#include <string>

using namespace std;

int main() {
	int* arr = new int[5];
	float average = 0.0f;

	cout << "���� 5�� �Է�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		average += arr[i];
	}
	average /= 5;
	cout << "��� " << average << endl;
}