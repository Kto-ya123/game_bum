#pragma once
#include"education.h"
namespace game_231
{
	class course_kass : public education
	{
	public:
		course_kass(int mon) : education(mon, educ::not_have_education) {};
		std::string get_name_for() { return "����� ��������"; };
		static std::string get_name() { return "����� ��������"; };
		virtual educ type() const { return educ::c_sh; }
	};
}