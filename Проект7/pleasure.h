#pragma once
#include"player.h"
namespace game_231
{
	class pleasure
	{
	public:

		pleasure(std::string, int, int, int = 0, cloth = cloth::not_have_clothes, cars = cars::not_have_cars);
		bool operator() (player&);
		std::string get_name();
		int get_money();

	private:
		std::string _name;
		int _money;
		int _happy;
		int _life;
		cars _car;
		cloth _clothes;

	};
}