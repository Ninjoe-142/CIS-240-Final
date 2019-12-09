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
	/*
	practiceQuestionOne();
	practiceQuestionTwo();
	practiceQuestionThree();
	*/
	vector<int> mainGameQuestion {1,2,3,4,5,6,8,9,10};
	
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	shuffle(mainGameQuestion.begin(), mainGameQuestion.end(),default_random_engine(seed));
	
	for (int i = 0; i < 10; i++){
		bool correct = true;
	
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
		  i = 1000;
		}
	}
	
	
}
