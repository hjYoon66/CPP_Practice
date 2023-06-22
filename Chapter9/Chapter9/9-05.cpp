//문제 5. 디지털 회로에서 기본적인 게이트로 OR 게이트, AND 게이트, XOR 게이트 등이 있다. 이들은 각각 두 입력 신호를 받아 OR 연산, AND 연산, XOR 연산을 
//수행한 결과를 출력한다. 이 게이트들을 각각 ORGate, XORGate, ANDGate 클래스로 작성하고자 한다 

#include <iostream>

using namespace std;

class AbstractGate {
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;
};
class ANDGate :public AbstractGate {
public:
	bool operation() {
		return x & y;
	}
};
class ORGate :public AbstractGate {
public:
	bool operation() {
		return x | y;
	}
};
class XORGate :public AbstractGate {
public:
	bool operation() {
		return x ^ y;
	}
};
int main() {
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;

	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);

	cout.setf(ios::boolalpha);
	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << xorGate.operation() << endl;

	return 0;
}