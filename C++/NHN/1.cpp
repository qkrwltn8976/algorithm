/**
 * 수건돌리기 게임
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

void solution(int numOfAllPlayers, int numOfQuickPlayers, char *namesOfQuickPlayers, int numOfGames, int *numOfMovesPerGame) {
  // TODO: 이곳에 코드를 작성하세요. 추가로 필요한 함수와 전역변수를 선언해서 사용하셔도 됩니다.
	istringstream iss;
	vector<pair<char, int>> players(numOfAllPlayers);
	int catcher = numOfAllPlayers - 1;
	int index = 0;
	players[catcher] = make_pair('A', 1);
	int num = 65;
	for(int i=0; i<numOfAllPlayers-1; i++) {
		players[i] = make_pair(++num, 0);
		// printf("%d // %c\n", i, players[i]);
	}
	
	for(int i=0; i<numOfGames; i++) {
		index = (index+numOfMovesPerGame[i]+catcher) % catcher;
		
		// printf("현재위치");
		// printf("%d : %c\n", index, players[index]);
		// printf("술래");
		// printf("%d : %c\n", catcher, players[catcher]);
		// printf("**\n");
		
		bool exist = false;
		// printf("%d\n", sizeOf(namesOfQuickPlayers));
		for(int j=0; j<numOfQuickPlayers; j++) {
			if(players[index].first == namesOfQuickPlayers[j]) {
				// printf("존재\n");
				exist = true;
				break;
			}
		}
		if(exist) { //
			players[catcher].second++;
			// printf("다시");
		}
		else { // 술래 성공, 술래교체
			// printf("술래교체");
			players[index].second++;
			pair<char, int> tmp = players[catcher];
			players[catcher] = players[index];
			players[index] = tmp;
		}
		
	}
	
	for(int i=0; i<numOfAllPlayers; i++) {
		printf("%c %d\n", players[i].first, players[i].second);
	}
}

struct input_data {
  int numOfAllPlayers;
  int numOfQuickPlayers;
  char *namesOfQuickPlayers;
  int numOfGames;
  int *numOfMovesPerGame;
};

void process_stdin(struct input_data& inputData) {
  string line;
  istringstream iss;

  getline(cin, line);
  iss.str(line);
  iss >> inputData.numOfAllPlayers;

  getline(cin, line);
  iss.clear();
  iss.str(line);
  iss >> inputData.numOfQuickPlayers;

  getline(cin, line);
  iss.clear();
  iss.str(line);
  inputData.namesOfQuickPlayers = new char[inputData.numOfQuickPlayers];
  for (int i = 0; i < inputData.numOfQuickPlayers; i++) {
    iss >> inputData.namesOfQuickPlayers[i];
  }

  getline(cin, line);
  iss.clear();
  iss.str(line);
  iss >> inputData.numOfGames;

  getline(cin, line);
  iss.clear();
  iss.str(line);
  inputData.numOfMovesPerGame = new int[inputData.numOfGames];
  for (int i = 0; i < inputData.numOfGames; i++) {
    iss >> inputData.numOfMovesPerGame[i];
  }
}

int main() {
  struct input_data inputData;
  process_stdin(inputData);

  solution(inputData.numOfAllPlayers, inputData.numOfQuickPlayers, inputData.namesOfQuickPlayers, inputData.numOfGames, inputData.numOfMovesPerGame);
  return 0;
}