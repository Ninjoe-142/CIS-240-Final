#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void showScore(PlayerData curPlayer) {
	//Call in data from external file, search for PlayerData, display
	fstream scoreBoard;//ref to external score board
	vector<PlayerData> ref;	//vector to hold player data
	bool flag = false;	//flag to indicate player on board or not

	//Open score board
	scoreBoard.open(// insert file path *HERE*"C:\\Users\\forti\\Desktop\\ScoreBoard.txt"**, ios::in);

	for (int i = 0; i < 10; i++) {
		ref.push_back(PlayerData());
		scoreBoard >> ref[i].playerName >> ref[i].score;

		//check vector for playerName data
		if (ref[i].playerName == curPlayer.playerName)
		{
			cout << curPlayer.playerName << " is on the leaderboard at rank " << i + 1 <<
				", with a score of " << ref[i].score << endl;
			flag = true;
		}
		
	}

	//Cheap-o 'else' for if player doesn't show up on scoreboard provide cout
	if (flag != true)
		cout << curPlayer.playerName << " isn't on the leaderboard... YET!\n";
	
	scoreBoard.close();
}
