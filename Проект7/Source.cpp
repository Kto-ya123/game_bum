#include<iostream>
#include<conio.h>
#include<map>
#include<string>
#include<iomanip>
#include"player.h"
//#include"game.h"
#include"interfaceForGame.cpp"



int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	std::string name;
	std::getline(std::cin, name);
	game_231::player play(name);
	game_231::game gm(play);
	//game_231::game(game_231::player(name))
	game_231::interfaceForGame gr(gm);
	gr.start();

	return 0;
}