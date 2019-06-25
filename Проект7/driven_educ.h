#pragma once
#include"education.h"
namespace game_231
{
	class driven_educ : public education
	{
	public:
		driven_educ(int mon) : education(mon, educ::not_have_education) {};
		std::string get_name_for() { return "Водительское удостоверение"; };
		static std::string get_name() { return "Водительское удостоверение"; };
		virtual educ type() const { return educ::drive; }
	};
}