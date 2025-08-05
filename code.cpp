// code.cpp
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int checkwin();
void board(string, string);
void validation(int &);

int main()
{
	int player = 1, i, choice;
	char mark;
	fstream ofile("playersnames.txt", ios::app);;
	cout << "Enter player 1 name: ";
	string p1;
	getline(cin, p1);
	ofile << p1 << endl;
	cout << "Enter player 2 name: ";
	string p2;
	getline(cin, p2);
	ofile << p2 << endl;
	int again;
	do
	{
		do
		{
			board(p1, p2);
			player = (player % 2) ? 1 : 2;
			cout << ((player % 2) ? p1 : p2) << ", enter a number:  ";
			validation(choice);
			mark = (player == 1) ? 'X' : 'O';

			if (choice == 1 && square[1] == '1')
				square[1] = mark;
			else if (choice == 2 && square[2] == '2')
				square[2] = mark;
			else if (choice == 3 && square[3] == '3')
				square[3] = mark;
			else if (choice == 4 && square[4] == '4')
				square[4] = mark;
			else if (choice == 5 && square[5] == '5')
				square[5] = mark;
			else if (choice == 6 & square[6] == '6')
				square[6] = mark;
			else if (choice == 7 && square[7] == '7')
				square[7] = mark;
			else if (choice == 8 && square[8] == '8')
				square[8] = mark;
			else if (choice == 9 && square[9] == '9')
				square[9] = mark;
			else
				continue;
			i = checkwin();
			player++;
		} while (i == -1);
		board(p1, p2);
		if (i == 1)
		{
			cout << "==>" << (((--player) % 2) ? p1 : p2) << " win \n";
			ofile << (((--player) % 2) ? p1 : p2) << " has Won." << endl;
		}
		else
		{
			cout << "==>\aGame draw\n";
			ofile << "The game has drawn" << endl;
			ofile.close();
		}
		cout << "Press 1 to play again Or press 2 to exit: ";
		validation(again);
		if (again == 1)
		{
			for (int i = 1; i < 10; i++)
			{
				square[i] = (i)+48;
			}
		}
	} while (again == 1);
	system("pause");
	return 0;
}

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
		square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}

void board(string Player1, string Player2)
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << Player1 << " (X)  -  " << Player2 << " (O)" << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl;
}

void validation(int &x)
{
	cin >> x;
	if (cin.fail() || x < 1 || x > 9)
	{
		cout << "Invalid input. Try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
		validation(x);
		return;
	}
	return;
}