/*Questions.cpp
Matt Archer & Joe DeCrisanti
Dec 5, 2019
CIS 240.01
Post University*/

#include <iostream>
#include <string>
using namespace std;

bool practiceQuestionOne() {
	
	cout << "What is the current edition of D&d" << endl;
	
	string answers[4] ={"5e", "3e", "3.5e", "6e"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool practiceQuestionTwo() {
	
	cout << "How many Dungeon Masters (DMs) are there for a game?" << endl;
	
	string answers[4] ={"1", "1 per dungeon", "2", "0"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool practiceQuestionThree() {
	
	cout << "Pick the class that casts spells using their intelligence stat?" << endl;
	
	string answers[4] ={"Wizard", "Sorcerer", "Bard", "Paladin"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionOne() {
	
	cout << "Which class has the feature Meta-Magic" << endl;
	
	string answers[4] ={"Sorcerer", "Bard", "Paladin", "Wizard"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionTwo() {
	
	cout << "What does AC stand for in D&D?" << endl;
	
	string answers[4] ={"Armor Class", "Air Conditioning", "Armor Control", "Wizard"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionThree() {
	
	cout << "What does DC stand for in D&D?" << endl;
	
	string answers[4] ={"Dificulty Class", "Dificulty Check", "Display Class", "Damage Cleric"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionFour() {
	
	cout << "What spell creates a fire explosion that encompasses a 20 ft radius?" << endl;
	
	string answers[4] ={"FireBall", "FireBolt", "Zone of Truth", "Eldrich Blast"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionFive() {
	
	cout << "What type of dice is used when a player try’s to make an attack?" << endl;
	
	string answers[4] ={"D20", "D4", "D6", "D100"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionSix() {
	
	cout << "Which of the following is a cantrip?" << endl;
	
	string answers[4] = {"Eldrich Blast", "FireBall", "FireBolt", "Zone of Truth"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionSeven() {
	
	cout << "Which of the following NOT a playable race in D&D?" << endl;
	
	string answers[4] = {"Half-Dwarf", "Halfling", "Elf", "Human"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionEight() {
	
	cout << "How is turn order determined in D&D?" << endl;
	
	string answers[4] = {"Rolling for Initative", "Rolling for Speed", "Players go first", "Monsters go first"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionNein () {
	
	cout << "What happens if someone rolls a natural 20?" << endl;
	
	string answers[4] = {"A Critical Sucess", "A Critical Fail", "Nothing", "Regain HP"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}

bool questionTen () {
	
	cout << "How long is a long rest?" << endl;
	
	string answers[4] = {"8 Hours", "4 Hours", "1 Hour", "10 Hours"};
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char choice;
	
	while (a == b || a == c || a == d || b == c || b == d || c == d) {
		
		srand( static_cast<unsigned int>(time(0)));
		
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
			return false;
			break;
	}
	
	return false;
}
