/*Game.cpp
Matt Archer & Joe DeCrisanti
Dec 5, 2019
CIS 240.01
Post University*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>       // std::chrono::system_clock
#include <random>
using namespace std;

struct PlayerData {
	string playerName;
	int score;
};
int main();
void InputScore(PlayerData);
bool practiceQuestionOne();
bool practiceQuestionTwo();
bool practiceQuestionThree();
bool questionOne();
bool questionTwo();
bool questionThree();
bool questionFour();
bool questionFive();
bool questionSix();
bool questionSeven();
bool questionEight();
bool questionNein();
bool questionTen();

void Game(){
	
	cout << "Lets start with three warm up questions\n";
	bool practceQuestions[3];
	
	practceQuestions[0] = practiceQuestionOne();
	practceQuestions[1] = practiceQuestionTwo();
	practceQuestions[2] = practiceQuestionThree();
	int j = 0;
	
	for (int i = 0; 1 <3; i++){
		if(practceQuestions[i]){
			j++;
		}
		if (j < 2){
			cout << "You didn't even get two of the easy three right.\nWhat makes you think you got what it takes?";
			main();
		}else {
			cout <<"You know your stuff kid lets try something harder.";
		}
			
	}

	vector<int> mainGameQuestion {1,2,3,4,5,6,8,9,10};
	
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	shuffle(mainGameQuestion.begin(), mainGameQuestion.end(),default_random_engine(seed));
	bool correct = true;
	
	for (int i = 0; i < 10; i++){

		switch (mainGameQuestion[i]){
			case 1:
				correct = questionOne();
				break;
			case 2:
				correct = questionTwo();
				break;
			case 3:
				correct = questionThree();
				break;
			case 4:
				correct = questionFour();
				break;
			case 5:
				correct = questionFive();
				break;
			case 6:
				correct = questionSix();
				break;
			case 7:
				correct = questionSeven();
				break;
			case 8:
				correct = questionEight();
				break;
			case 9:
				correct = questionNein();
				break;
			case 10:
				correct = questionTen();
				break;
			default:
				break;
		}
		if (!correct){
			PlayerData currentPlayer;
			cout << "You lost please input a name to track your score\n";
			cin >> currentPlayer.playerName;
			currentPlayer.score = (i)* 100000;
			InputScore(currentPlayer);
			i = 1000;
		}
	}
	if (correct){
		PlayerData winningPlayer;
		cout << "You won $1 million enter your name to save your score\n";
		cin >> winningPlayer.playerName;
		winningPlayer.score = 1000000;
		InputScore(winningPlayer);
	}
}
