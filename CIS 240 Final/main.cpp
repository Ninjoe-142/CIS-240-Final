//
//  main.cpp
//  CIS 240 Final
//
//  Created by Joseph DeCrisanti on 10/24/19.
//  Copyright © 2019 Joseph DeCrisanti. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int numOfUsers; 	         //Global counter for number of users
//const char DEFAULT_MONEY = '0'; //For reseting scores of users

//function prototypes
//Game should be void? Not sure, depends on display
//Questions seems like it could be several functions. Setting as bool return with empty parameters
struct PlayerData {
	string playerName;
	int score;
};
void resetScore();
void showRecord();
void Help();
void Game();
bool Questions();
void showScore(PlayerData);

int main() {
	// skeleton function to call other functions

	PlayerData test;
	
	char selection;  //For menu seletion

	cout << "******************************\n"
		<< "  Welcome to the Final game!  \n"
		<< "******************************\n";

	cout << endl << endl;
	 
	//Menu choices
	cout << "Start by selecting an option\n"
		<< "from the following:\n"
		<< endl
		<< "'G': Jump right in to the game\n"
		<< "'H': Explanation to the game\n"
		<< "'S': Check current leaderboard\n"
		<< "'T': find an idiviual's top score\n"
		<< "'Q': To Quit\n"
		<< "'R': Reset Records\n";

	cin >> selection;

	//switch to handle function call
	switch (selection)
	{
	case 'g':
	case 'G': Game();
		break;
	case 'h':
	case 'H': Help();
		break;
	case 's':
	case 'S': showRecord();
		break;
	case 't':
	case 'T':
			cout << "What player?\n";
			cin >> test.playerName;
			showScore(test);
		break;
			
	case 'r':
	case 'R': resetScore();
	break;
			
	case 'q':
	case 'Q': return 0;
		break;
			
	default:
			cout <<"You don't know how to use a menu?\n";
		break;
	}

	
	return 0;
}

