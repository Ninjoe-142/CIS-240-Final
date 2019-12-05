/*Questions.cpp
Matt Archer & Joe DeCrisanti
Dec 5, 2019
CIS 240.01
Post University*/

#include <iostream>
#include <string>
using namespace std;


bool practiceQuestionOne() {
	cout << "What is the current edition of D&D?" << endl ;
	
	string answers[4] = {"5e", "3e", "3.5e", "6e"};
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand(time(0));
		
		a = rand() % 4;
		b = rand() % 4;
		c = rand() % 4;
		d = rand() % 4;
		
	}
	
	
	
	cout << "A: " <<answers[a] << endl << "B: "<< answers[b] << endl << "C: " << answers[c]<< endl << "D: " << answers[d] << endl;
	
	cin >> choice;
	
	switch (choice) {
		case 'a':
		case 'A':
			if (a == 0){
				return true;
			}else{
				return false;
			}
		case 'b':
		case 'B':
			if (b == 0){
				return true;
			}else{
				return false;
			}
		case 'c':
		case 'C':
			if (c == 0){
				return true;
			}else{
				return false;
			}
		case 'd':
		case 'D':
			if (d == 0){
				return true;
			}else{
				return false;
			}
		default:
			practiceQuestionOne();
			break;
	}
	
	return true;
}
