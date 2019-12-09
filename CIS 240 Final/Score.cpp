#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

struct PlayerData {
	string playerName;
	int score;
};


void InputScore(PlayerData curPlayer)
{
	
	/*Accept array, compare against current leader board,
	sort, re-write leader board to reflect current rankings*/
	fstream scoreBoard;
	//set temp array to allow entrance of new user data for sorting
	vector<PlayerData> temp;
	//temp PlayerData for swap
	PlayerData rand;

	//input and output to PlayerScores.txt
	scoreBoard.open ("ScoreBoard.txt");

	//set the first 10 elements to what's in external file
	for (int i = 0; i < 10; i++) {
		temp.push_back(PlayerData());
		 scoreBoard >> temp[i].playerName >> temp[i].score;
	}
	scoreBoard.close();
	//assign most recent player data to vector
	
	temp.push_back({curPlayer.playerName, curPlayer.score});

	//swap values in vector with bubble swap
	bool swap;
	do {
		swap = false;
		
		for (int i = 0; i < (temp.size() - 1); i++){
			if (temp[i + 1].score > temp[i].score) {
				temp[i].playerName = rand.playerName;
				temp[i].score = rand.score;
				temp[i].playerName = temp[i + 1].playerName;
				temp[i].score = temp[i + 1].score;
				temp[i + 1].playerName = rand.playerName;
				temp[i + 1].score = rand.score;
				swap = true;
			}
		}
	}while (swap != false);
	
	
	if (temp.size() == 11) {
		temp.pop_back();
	}
	scoreBoard.open("ScoreBoard.txt");
	

	for (int i = 0; i < temp.size(); i++) {
		scoreBoard << temp[i].playerName << "\t" << temp[i].score << "\n";
	}
	scoreBoard.close();
}
