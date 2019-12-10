#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void showRecord() {
	/*******************************************
				SHOW CURRENT BOARD
	********************************************/
	vector<PlayerData> temp; //vector to cout the score board
	fstream scoreBoard;
	
	//open score board file
	scoreBoard.open("C:\\Users\\forti\\Desktop\\ScoreBoard.txt");

	cout << "CURRENT TOP SCORES:\n\n\n";

	for (int i = 0; i < 10; i++) {
		temp.push_back(PlayerData());
		scoreBoard >> temp[i].playerName >> temp[i].score;

		cout << temp[i].playerName << "\t" << temp[i].score << endl;
	}

	int main();

}
