void showScore() {
	//show leaderboard
	string lead1, lead2, lead3, lead4, lead5,
		lead6, lead7, lead8, lead9, lead0;

	ifstream inputCheck;

	inputCheck.open("PlayerScores.out");

	inputCheck >> lead1 >> lead2 >> lead3 >> lead4
		>> lead5 >> lead6 >> lead7 >> lead8 >> lead9 >> lead0;

	cout << "TOP PLAYERS ARE:\n"
		<< lead1 << endl
		<< lead2 << endl
		<< lead3 << endl
		<< lead4 << endl
		<< lead5 << endl
		<< lead6 << endl
		<< lead7 << endl
		<< lead8 << endl
		<< lead9 << endl
		<< lead0 << endl
		<< "*****************\n";
}
