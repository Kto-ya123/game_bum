#pragma once
#include"car.h"
namespace game_231
{
	class rolls_car : public car
	{
	public:
		rolls_car(int mon) : car(mon, cars::mers) {};
		std::string get_name_for() { return "�����"; };
		static std::string get_name() { return "�����"; };
		cars type() const { return cars::rolls; };
	};
}
