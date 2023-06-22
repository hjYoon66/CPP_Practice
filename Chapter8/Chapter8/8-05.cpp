//���� 5. BaseArray�� ��ӹ޾� ťó�� �۵��ϴ� MyQueue Ŭ������ �ۼ��϶�. MyQueue�� Ȱ���ϴ� ��ʴ� ������ ����.

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
	cout << "ť�� ������ 5���� ������ �Է��϶� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mq.enqueue(n);
	}
	cout << "ť�� �뷮 : " << mq.capacity() << ", ť�� ũ�� : " << mq.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�.";
	while (mq.length() != 0) {
		cout << mq.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mq.length() << endl;
}