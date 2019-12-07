/*Game.cpp
Matt Archer & Joe DeCrisanti
Dec 5, 2019
CIS 240.01
Post University*/

#include <iostream>
#include <string>
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
	
	practiceQuestionOne();
	practiceQuestionTwo();
	practiceQuestionThree();
	
	bool mainGameQuestions[] = {
		*questionOne,
		*questionTwo,
		*questionThree,
		*questionFour,
		*questionFive,
		*questionSix,
		*questionSeven,
		*questionEight,
		*questionNein,
		*questionTen
	};
	
	
	
}
