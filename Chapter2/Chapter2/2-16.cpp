//���� �ؽ�Ʈ�� �Է¹޾� ���ĺ� ������׷��� �׸��� ���α׷��� �ۼ��϶�. 
//�빮�ڴ� ��� �ҹ��ڷ� �����ϸ�, �ؽ�Ʈ �Է��� ���� ��;�� ���ڷ� �Ѵ�.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char buf[1000];
	int alphabet[26]={ 0 }, cnt;

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(buf, 1000, ';');
	cout << "�� ���ĺ� �� " << strlen(buf) << endl;

	for (int i = 0; i < strlen(buf); i++) {
		if (buf[i] >= 'a' && buf[i] <= 'z') {
			cnt = (int)(buf[i] - 'a');
			alphabet[cnt]++;
		}
		else if (buf[i] >= 'A' && buf[i] <= 'Z') {
			cnt = (int)(buf[i] - 'A');
			alphabet[cnt]++;
		}
		else {}
	}

	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << "(" << alphabet[i] << ")\t : ";
		for (int j = 0; j < alphabet[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}