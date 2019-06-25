#pragma once
#include"player.h"
namespace game_231
{
	class eat
	{
	public:

		eat(std::string, int, int, int = 0, cloth = cloth::not_have_clothes);
		bool operator() (player&);
		std::string get_name();
		int get_money();

	private:
		std::string _name;
		int _money;
		int _happy;
		int _life;
		cloth _clothes;

	};
}