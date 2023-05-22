//문제 6. 동일한 크기의 배열을 변환하는 다음 2개의 static 멤버 함수를 가진 ArrayUtill2 클래스를 만들고, 이 클래스를 이용하여 아래 결과와 같이 출력되도록 프로그램을 완성하라.

#include <iostream>
#include <string.h>

using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* ret = new int[size];
	int ind = 0;
	cout << "합친 정수 배열을 출력한다." << endl;
	for (int i = 0; i < size / 2; i++) {
		ret[ind] = s1[i];
		cout << ret[ind] << ' ';
		ind++;
	}
	for (int i = 0; i < size / 2; i++) {
		ret[ind] = s2[i];
		cout << ret[ind] << ' ';
		ind++;
	}
	cout << endl;

	return ret;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int cnt = 0;
	int* tmp = new int[size];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) break;
			if (j == size - 1) tmp[cnt++] = s1[i];
		}
	}
	if (cnt == 0) return NULL;

	retSize = cnt;
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	int* ret = new int[retSize];
	for (int i = 0; i < retSize; i++) {
		ret[i] = tmp[i];
		cout << ret[i] << ' ';
	}
	cout << endl;

	return ret;
}

int main() {
	int x[5], y[5], retSize;
	int* z, * w;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수를 5개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	z = ArrayUtility2::concat(x, y, 10);
	w = ArrayUtility2::remove(x, y, 5, retSize);
	return 0;
}