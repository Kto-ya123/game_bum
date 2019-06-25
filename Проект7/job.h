#pragma once
#include"player.h"
namespace game_231
{
	class job
	{
	public: 
		job(std::string, int, int, int, cloth = cloth::not_have_clothes, cars = cars::not_have_cars, educ = educ::not_have_education);
		bool operator() (player&);
		std::string get_name();
		int get_money();

	private:
		std::string _name;
		int _money;
		int _happy;
		int _life;
		cars _cars;
		educ _education;
		cloth _clothes;

	};
}
