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
{
	long long serial_number = 0;
	initializeHandle;
	COORD size = getSize();
	setCursor({ 0,size.Y - 1 });
	string playerName = "";
	cout << "Type player name\n>:";
	getline(cin, playerName);
	Player * player1;
	World * world1;
	Proxy* proxy;
	proxy = new Proxy();
	player1 = new Player(playerName,&serial_number);
	cout << kbHelp << "\n\nStarting listen keyboard.\n";
	player1->listenKeyboard();
	player1->getPositon();
	delete player1;
	return 0;
}