//문제 5. BaseArray를 상속받아 큐처럼 작동하는 MyQueue 클래스를 작성하라. MyQueue를 활용하는 사례는 다음과 같다.

#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyQueue :public BaseArray {
	int start;
	int end;
public:
	MyQueue(int capacity = 100) :BaseArray(capacity) { start = 0; end = 0; }
	int capacity() {
		return getCapacity();
	}
	int length() {
		return end - start;
	}
	void enqueue(int n) {
		put(end, n);
		end++;
	}
	int dequeue() {
		return get(start++);
	}

};
int main() {
	MyQueue mq(100);
	int n;
	cout << "큐에 삽입할 5개의 정수를 입력하라 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mq.enqueue(n);
	}
	cout << "큐의 용량 : " << mq.capacity() << ", 큐의 크기 : " << mq.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다.";
	while (mq.length() != 0) {
		cout << mq.dequeue() << ' ';
	}
	cout << endl << "큐의 현재 크기 : " << mq.length() << endl;
}