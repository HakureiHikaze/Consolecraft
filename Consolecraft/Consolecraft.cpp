#include"Consolecraft.h"

using namespace std;
void setCursor(COORD position)
{
	initializeHandle;
	SetConsoleCursorPosition(hOut, position);
}
COORD getSize()
{
	initializeHandle;
	return bInfo.dwSize;
}
void fillCheracter(COORD a, COORD b)
{
	initializeHandle;
	//TODO: You fucking idiot. 
}
int main() 
{	initializeHandle;
	COORD size = getSize();
	setCursor({0,size.Y-1});
	string playerName = "";
	cout << "Type player name\n>:";
	getline(cin, playerName);
	Player player1(playerName);
	player1.listenKeyboard();
	player1.getPositon();
	return 0;
}