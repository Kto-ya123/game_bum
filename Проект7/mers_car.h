#pragma once
#include"car.h"
namespace game_231
{
	class mers_car : public car
	{
	public:
		mers_car(int mon) : car(mon, cars::zhiga) {};
		static std::string get_name() { return "����"; };
		std::string get_name_for() { return "����"; };
		cars type() const { return cars::mers; };

	};
}