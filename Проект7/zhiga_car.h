#pragma once
#include"car.h"
namespace game_231
{
	class zhiga_car : public car
	{
	public:
		zhiga_car(int mon) : car(mon, cars::not_have_cars) {};
		static std::string get_name() { return "����"; };
		std::string get_name_for() { return "����"; };
		cars type() const { return cars::zhiga; };
	};
}