//���� 6. string Ŭ������ �̿��Ͽ� ����ڰ� �Է��� ���� �� ���� ���ڿ��� �Է¹ް� �Ųٷ� ����ϴ� ���α׷��� �ۼ��϶�

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	string str;

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0) break;
		
		reverse(str.begin(), str.end());
		cout << str << endl;
	}

	return 0;
}