#pragma once
#include"education.h"
namespace game_231
{
	class bank_deal : public education
	{
	public:
		bank_deal(int mon) : education(mon, educ::high) {};
		std::string get_name_for() { return "���������� ����"; };
		static std::string get_name() { return "���������� ����"; };
		virtual educ type() const { return educ::b_deal; }
	};
}