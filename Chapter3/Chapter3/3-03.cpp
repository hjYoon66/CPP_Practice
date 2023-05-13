//문제 3.은행에서 사용하는 프로그램을 작성하기 위해, 은행 계좌 하나를 표현하는 클래스 Account가 필요하다. 
// 계좌 정보는 계좌의 주인, 계좌 번호, 잔액을 나타내는 3 멤버 변수로 이루어진다.
//main() 함수의 실행 결과가 다음과 같도록 Account 클래스를 작성하라
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	int id;
	int balance;
public:
	Account(string name, int id, int balance);
	void deposit(int money);
	string getOwner();
	int inquiry();
	int withdraw(int money);
};
Account::Account(string name, int id, int balance) {
	this->name = name;
	this->id = id;
	this->balance = balance;
}
void Account::deposit(int money) {
	balance += money;
}
string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return balance;
}
int Account::withdraw(int money) {
	balance -= money;
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	return 0;
}
