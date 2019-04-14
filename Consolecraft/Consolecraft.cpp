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
	cout << "Type player name\n??>:";
	getline(cin, playerName);
	Player player1(playerName);
	player1.listenKeyboard();
	//fillCheracter(COORD{ 1,1 }, COORD{15,15});
	player1.getPositon();
	/*while (true)
	{
		int key = 0;
		key = _getch();
		if (key == 27) { cout << key<<endl; break; }
		else { cout << key<<endl; }
	}*/
	return 0;
}