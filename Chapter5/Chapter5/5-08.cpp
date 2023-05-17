//문제 7번의 MyIntStack를 수정하여 다음과 같이 선언하였다. 스택에 저장할 수 있는 정수의 최대 개수는 생성자에서 주어지고 size 멤버에 유지한다. 
//MyIntStack 클래스를 작성하라.
#include <iostream>
#include <string>

using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack() :MyIntStack(1) {}
	MyIntStack(int size);
	MyIntStack(MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};
MyIntStack::MyIntStack(int size) {
	this->p = new int [size];
	this->size = size;
	this->tos = -1;
}
MyIntStack::MyIntStack(MyIntStack& s) {
	int len = s.size;
	this->p = new int[len];
	this->size = len;
	this->tos = s.tos;
	for (int i = 0; i <= tos; i++)
		this->p[i] = s.p[i];
}
MyIntStack::~MyIntStack() {
	delete[]p;
}
bool MyIntStack::push(int n) {
	if (tos >= 9) return false;
	p[++tos] = n;
	return true;
}
bool MyIntStack::pop(int& n) {
	if (tos < 0) return false;
	n = p[tos--];
	return true;
}


int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;

	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;

	return 0;
}