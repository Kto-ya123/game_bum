#pragma once
#include"education.h"
namespace game_231
{
	class course_it : public education
	{
	public:
		course_it(int mon) : education(mon, educ::high) {};
		std::string get_name_for() { return "Курсы програмиистов"; };
		static std::string get_name() { return "Курсы программистов"; };
		virtual educ type() const { return educ::c_it; }
	};
}