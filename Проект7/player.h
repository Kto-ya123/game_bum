#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include<vector>
#include<iomanip>
#include<conio.h>
#include<iostream>
#include"set_cars.h"
#include"set_clothes.h"
#include"set_education.h"
#include<memory>


namespace game_231
{
	class player
	{
	public:
		friend class game;
		friend class interfaceForGame;
		player(std::string name, int money = 0, int happienes = 100,
			int life = 100, int day = 0, std::vector<std::shared_ptr<clothes>> _cl = {},
			std::vector<std::shared_ptr<car>> pl_c = {}, std::vector<std::shared_ptr<education>> pl_ed = {});

		std::string get_name();		
		
		int get_money();
		
		int get_happienes();
		
		int get_life();
		
		int get_day();
		
		void plus_money(int money);
		
		void plus_happienes(int happy);
		
		void plus_life(int life);

		void minus_happienes(int happy);

		void minus_life(int life);

		bool player::minus_money(int money);
		
		void statistic();
		
		bool zhiv();
		
		void check_life_happy();
		
		bool have_clothes(cloth pl);
		
		bool have_cars(cars pl);
		
		bool have_educ(educ pl);
		
		bool have_obj(cloth, cars = cars::not_have_cars, educ = educ::not_have_education);
		
		~player() {};
	private:
		std::string _name;
		int _money;
		int _happienes;
		int _life;
		bool _zh;
		int _day;
		//имущество игрока и образование
		std::vector<std::shared_ptr<clothes>> player_clothes;
		std::vector<std::shared_ptr<car>> player_cars;
		std::vector<std::shared_ptr<education>> player_educ;

		
		/*int experiens;
		unsigned int level;*/		
	};
}
#endif // !PLAYER_H