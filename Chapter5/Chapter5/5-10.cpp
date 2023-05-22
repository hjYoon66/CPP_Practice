//���� 10. ������ �����ϴ� �ڵ带 �ۼ��غ���. ���� �ڵ�� ���� ����� �����Ͽ� append() �Լ��� �ۼ��ϰ� ��ü ���α׷��� �ϼ��϶�.
//append()�� Buffer ��ü�� ���ڿ��� �߰��ϰ� Buffer ��ü�� ���� ������ ��ȯ�ϴ� �Լ��̴�.

#include <iostream>
#include <string>

using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};

Buffer& append(Buffer& buf, string text) {
	buf.add(text);
	return buf;
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();

	return 0;
}