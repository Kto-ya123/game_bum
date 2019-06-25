#pragma once
#include"education.h"
namespace game_231
{
	class course_kass : public education
	{
	public:
		course_kass(int mon) : education(mon, educ::not_have_education) {};
		std::string get_name_for() { return "Курсы кассиров"; };
		static std::string get_name() { return "Курсы кассиров"; };
		virtual educ type() const { return educ::c_sh; }
	};
}