#pragma once
#include"education.h"
namespace game_231
{
	class college : public education
	{
	public:
		college(int mon) : education(mon, educ::not_have_education) {};
		std::string get_name_for() { return "Колледж"; };
		static std::string get_name() { return "Колледж"; };
		virtual educ type() const { return educ::coll; }
	};

}