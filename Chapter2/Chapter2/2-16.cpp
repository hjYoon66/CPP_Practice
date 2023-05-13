//영문 텍스트를 입력받아 알파벳 히스토그램을 그리는 프로그램을 작성하라. 
//대문자는 모두 소문자로 집계하며, 텍스트 입력의 끝은 ‘;’ 문자로 한다.
#include <iostream>
#include <string>
using namespace std;

int main() {
	char buf[1000];
	int alphabet[26]={ 0 }, cnt;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(buf, 1000, ';');
	cout << "총 알파벳 수 " << strlen(buf) << endl;

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