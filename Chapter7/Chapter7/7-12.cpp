//���� 12. ���� �迭�� �׻� ���� ������ �����ϴ� SoredArray Ŭ������ �ۼ��Ϸ��� �Ѵ�. �Ʒ��� main() �Լ��� �۵��� ��ŭ�� SortedArray Ŭ������ �ۼ��ϰ�
//+�� ==�����ڵ� �ۼ��϶�.
//�ʹ� �������... �����...
#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray(); //p�� NULL�� size�� 0���� �ʱ�ȭ
	SortedArray(SortedArray& src); //���� ������
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
