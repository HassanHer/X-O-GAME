#include<iostream>
#include<string>
using namespace std;
void fb() {
	char board[7][7] = {
		'-','-','-','-','-','-','-'
		,'|','1','|','2','|','3','|'
		,'|','-','|','-','|','-','|'
		,'|','4','|','5','|','6','|'
		,'|','-','|','-','|','-','|',
		'|','7','|','8','|','9','|',
		'-','-','-','-','-','-','-' };
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}
void check(char board[7][7], string &e) {
	int c = 0;
	if (board[1][1] == board[1][3] && board[1][1] == board[1][5] && board[1][5] == board[1][3]) {
		cout << "\nPlayer " << board[1][1] << " Win!!\nDo you want to play again? \n Enter (yes) for play again\n Enter (no) to close the game "; cin >> e;
	}
	if (board[3][1] == board[3][3] && board[3][1] == board[3][5] && board[3][5] == board[3][3]) {
		cout << "\nPlayer " << board[3][3] << " Win!!\nDo you want to play again? \n Enter (yes) for play again\n Enter (no) to close the game "; cin >> e;
	}
	if (board[5][1] == board[5][3] && board[5][1] == board[5][5] && board[5][5] == board[5][3]) {
		cout << "\nPlayer " << board[5][3] << " Win!!\nDo you want to play again? \n Enter (yes) for play again\n Enter (no) to close the game "; cin >> e;
	}
	if (board[1][1] == board[3][1] && board[1][1] == board[5][1] && board[5][1] == board[3][1]) {
		cout << "\nPlayer " << board[1][1] << " Win!!\nDo you want to play again? \n Enter (yes) for play again\n Enter (no) to close the game "; cin >> e;
	}
	if (board[1][3] == board[3][3] && board[1][3] == board[5][3] && board[5][3] == board[3][3]) {
		cout << "\nPlayer " << board[3][3] << " Win!!\nDo you want to play again? \n Enter (yes) for play again\n Enter (no) to close the game "; cin >> e;
	}
	if (board[1][5] == board[3][5] && board[1][5] == board[5][5] && board[5][5] == board[3][5]) {
		cout << "\nPlayer " << board[5][5] << " Win!!\nDo you want to play again? \n Enter (yes) for play again\n Enter (no) to close the game "; cin >> e;
	}
	if (board[1][1] == board[3][3] && board[1][1] == board[5][5] && board[5][5] == board[3][3]) {
		cout << "\nPlayer " << board[3][3] << " Win!!\nDo you want to play again? \n Enter (yes) for play again\n Enter (no) to close the game "; cin >> e;
	}
	if (board[1][5] == board[3][3] && board[1][5] == board[5][1] && board[5][1] == board[3][3]) {
		cout << "\nPlayer " << board[3][3] << " Win!!\nDo you want to play again? \n Enter (yes) for play again\n Enter (no) to close the game "; cin >> e;
	}
	for (int i=0;i<7;i++) {
		for (int j = 0; j < 7; j++)
		{
			if (board[i][j]>=49&& board[i][j] <= 57) {
				c = 1;
				break;
			}
			
		}
	}
	if (c == 0) {
	cout<<"DRAW\nDo you want to play again? \n Enter (yes) for play again\n Enter (no) to close the game "; cin >> e;
	}
}
int main() {
	string e="e";
	char g, l, board[7][7] = {
		'-','-','-','-','-','-','-'
		,'|','1','|','2','|','3','|'
		,'|','-','|','-','|','-','|'
		,'|','4','|','5','|','6','|'
		,'|','-','|','-','|','-','|',
		'|','7','|','8','|','9','|',
		'-','-','-','-','-','-','-' } ,nboard[7][7] = {
		'-','-','-','-','-','-','-'
		,'|','1','|','2','|','3','|'
		,'|','-','|','-','|','-','|'
		,'|','4','|','5','|','6','|'
		,'|','-','|','-','|','-','|',
		'|','7','|','8','|','9','|',
		'-','-','-','-','-','-','-' };;
	cout << "WELCOME\n===========================\n";
	fb();
	while (e != "no"){
		
		 
		if (e == "yes") {
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 7; j++) {
					
					board[i][j] = nboard[i][j];
				}
			}
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		}
		e = "e";
		cout << "The number you will replace : ";
		cin >> l;
		cout << "The value you will replace with : ";
		cin >> g;
		for (int i = 0; i < 7; i++)
		{


			for (int j = 0; j < 7; j++) {
				if (board[i][j] == l) {
					board[i][j] = g;
				}
				cout << board[i][j] << " ";
				
			}
			cout << endl;
			
		}
  
		check(board, e);
		
		
		cout << "===========================\n";
	}
	cout << "GAME FINISHED\n\n\n";
	return 0;
}