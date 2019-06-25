#pragma once
#include"player.h"
#include"set_clothes.h"
namespace game_231
{
	enum cars {not_have_cars, zhiga, mers, rolls};

	class car
	{
	public:
		car(int mon, cars _cars) : _money(mon), _car(_cars) {}
		virtual cars type() const { return cars::not_have_cars; };
		virtual std::string get_name_for() { return ""; };
		cars need_have() { return _car; }
		int get_money() { return _money; }

	protected:
		int _money;
		cars _car;
	};	
}

