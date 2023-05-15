//문제 133. 영문자로 구성된 텍스트에 대해 각 알파벳에 해당하는 문자가 몇 개인지 출력하는 히스토그램 클래스 Histohram을 만들어 보자.
//대문자는 모두 소문자로 변환하여 처리한다.
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Histogram {
	string str;
	int alphabet[26] = { 0 };
public:
	Histogram(string str) { this->str = str;}
	void put(string nstr) { this->str.append(nstr); }
	void putc(char ch) { this->str.append(&ch); }
	void print();
	int getAlpahbetSize();
	void countAlphabet();
};
void Histogram::print() {
	cout << str << endl << endl;
	cout << "총 알파벳 수 : " << getAlpahbetSize() << endl << endl;

	countAlphabet();
	char ch = 'a';
	while (ch <= 'z') {
		cout << ch << " (" << alphabet[(int)ch - 'a'] << ")\t: ";
		for (int i = 0; i < alphabet[(int)ch - 'a']; i++) {
			cout << "*";
		}
		cout << endl;
		ch++;
	}
}
int Histogram::getAlpahbetSize() {
	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			cnt++;
		}
	}
	return cnt;
}
void Histogram::countAlphabet() {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			int index = str[i] - 'A';
			alphabet[index]++;
		}
		if (str[i] >= 'a' && str[i] <= 'z') {
			int index = str[i] - 'a';
			alphabet[index]++;	
		}
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

	return 0;
}
