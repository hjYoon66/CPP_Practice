//문제 12. 정수 배열을 항상 증가 순으로 유지하는 SoredArray 클래스를 작성하려고 한다. 아래의 main() 함수가 작동할 만큼만 SortedArray 클래스를 작성하고
//+와 ==연산자도 작성하라.
//너무 어려워요... 포기요...
#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray(); //p는 NULL로 size는 0으로 초기화
	SortedArray(SortedArray& src); //복사 생성자
	SortedArray(int p[], int size); 
	~SortedArray();
	SortedArray operator+(SortedArray& op2);
	SortedArray& operator=(const SortedArray& op2);
	void show();
};
SortedArray::SortedArray() {
	this->size = 0;
	this->p = NULL;
}
SortedArray::SortedArray(SortedArray& src) {
	this->size = src.size;
	this->p = new int[size];
	for (int i = 0; i < size; i++)
		this->p[i] = src.p[i];


}
int main() {
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}
