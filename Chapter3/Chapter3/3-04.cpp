//���� 4. CoffeeMachine Ŭ������ ������. 
//main() �Լ��� ���� ����� ������ ������ CoffeMachine Ŭ������ �ۼ��϶�. 
//���������� �� �ܿ��� Ŀ�ǿ� ���� ���� 1�� �Һ�ǰ�, �Ƹ޸�ī���� ��� Ŀ�Ǵ� 1, ���� 2�� �Һ�ǰ�, ���� Ŀ�Ǵ� Ŀ�� 1, �� 2, ���� 1�� �Һ�ȴ�. 
//CoffeeMachine Ŭ�������� � ��� ������ � ��� �Լ��� �ʿ����� �� �Ǵ��Ͽ� �ۼ��϶�.
#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();
};
CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}
void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
}
void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
}
void CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1;
	water -= 2;
	sugar -= 1;
}
void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, " << "Ŀ��:" << coffee << "\t��:" << water << "\t����:" << sugar<<endl;
}
void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}