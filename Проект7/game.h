#pragma once

#ifndef GAME_H
#define GAME_H
#include"player.h"
#include<random>
#include<time.h>
#include"job.h"
#include"pleasure.h"
#include"eat.h"
#include"pointer.h"
#include"set_cars.h"
//#include"interfaceForGame.cpp"

namespace game_231
{
	class game
	{
		
	public:
		friend class interfaceForGame;
		game(player);		
		/*void menu(); // меню
		void choose_job();
		void choose_pleasure();
		void choose_eat();
		void choose_education();
		void choose_cars();
		void choose_clothes();
		*/

		void init_menu();
		void init_job();
		void init_pleasure();
		void init_eat();
		void init_cars();
		void init_clothes();
		void init_education();
	private:
		player play; // переменная персонажа
		
		std::vector<job> job_for;
		std::vector<eat> eat_for;
		std::vector<pleasure> pleasure_for;
		//покупаемые объекты
		std::vector<std::shared_ptr<clothes>> sell_clothes;
		std::vector<std::shared_ptr<car>> sell_cars;
		std::vector<std::shared_ptr<education>> sell_educ;
		std::vector<std::string> _menu;
	};
}
#endif // !GAME_H
