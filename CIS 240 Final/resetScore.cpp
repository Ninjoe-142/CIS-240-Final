#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void resetScore() {
	/*
	***************************************************************************
									Reset Scoreboard
	***************************************************************************/
	fstream scoreBoard;		//ref to score board
	char selection;			//Y\N 
	vector<PlayerData> temp;
	string empty = "null";


	scoreBoard.open("C:\\Users\\forti\\Desktop\\ScoreBoard.txt");

	cout << "Abandon hope all ye who enter here.\n"
		<< "Do you really want to wipe the score board?\n"
		<< "DO YOU REALLY WANT TO BE A SORE LOSER!?\n"
		<< "\t\tY/N\n";
	
	cin >> selection;

	switch (selection) //quick switch for selection. 'Y' resets score, 'N' doesn't.
	{
	case 'y':
	case 'Y': 
		for (int i = 0; i < 10; i++) {
			temp.push_back(PlayerData());
			temp[i].playerName = empty;
			temp[i].score = 0;

			scoreBoard << temp[i].playerName << "\t" << temp[i].score << endl;
		}
		cout << "Your monstrous deed is done.\n";
		break;
	case 'n':
	case 'N': cout << "Understood, thank you.\n";
		break;
	default: cout << "You've made it this far: You know how to use a menu.\n";
		cin.get();
		resetScore();
	}

}
