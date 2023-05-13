//문제 2. 정수 공간 5개를 배열로 동적 할당 받고, 정수를 5개 입력받아 평균을 구하고 출력한 두 ㅣ배열을 소멸시키도록 
//main 함수를 작성해라
#include <iostream>
#include <string>

using namespace std;

int main() {
	int* arr = new int[5];
	float average = 0.0f;

	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		average += arr[i];
	}
	average /= 5;
	cout << "평균 " << average << endl;
}