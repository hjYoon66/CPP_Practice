//문제 14. 겜블링 게임을 만들어보자. 두 사람이 게임을 진행하며, 선수의 이름을 초기에 입력 받는다. 선수가 번갈아 자신의 차례에서 <Enter>키를 치면 랜덤한 3개의 수가 
//생성되고 모두 동일한 수가 나오면 게임에서 이기게 된다. 숫자의 범위가 너무 크면 3개의 숫자가 일치할 가능성이 낮아 숫자의 범위를 0~2로 제한한다. 랜덤 정수 생성은 문제 3번의 힌트를 참고하라. 
//선수는 Player 클래스로 작성하고, 2명의 선수는 배열로 구성하라. 그리고 게임은 GamblingGame 클래스로 작성하라.
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Player {
	int card[3];
	string name;
public:
	Player() :Player("플레이어"){}
	Player(string name) { this->name = name;
	}
	string getName() { return name; }
	bool playGambling();
};
bool Player::playGambling() {
	for (int i = 0; i < 3; i++) {
		card[i] = rand() % 3;
		cout << "\t" << card[i];
	}
	for (int i = 0; i < 2; i++) {
		if (card[i] != card[i + 1]) {
			return false;
		}
	}
	return true;
}
class GamblingGame {
	Player player[2];
	bool isGameCompleted = false;
public:
	GamblingGame();
	void play();
};
GamblingGame::GamblingGame() {
	cout << "*****갬블링 게임을 시작합니다. *****" << endl;
	string name;
	cout << "첫번째 선수 이름>>";
	cin >> name;
	player[0] = Player(name);
	cout << "두번째 선수 이름>>";
	cin >> name;
	player[1] = Player(name);
	getchar();
}
void GamblingGame::play() {
	int i = 0;
	while (!isGameCompleted) {
		cout << player[i % 2].getName() << ":<Enter>";
		getchar();
		if (player[i % 2].playGambling()) {
			isGameCompleted = true;
			cout << "\t" << player[i % 2].getName() << "님 승리!!" << endl;
		}
		else {
			cout << "\t아쉽군요!" << endl;
		}
		i++;
	}
}

int main() {
	GamblingGame game;
	game.play();

	return 0;
}
