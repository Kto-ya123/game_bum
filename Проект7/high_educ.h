#pragma once
#include"education.h"
namespace game_231
{
	class high_educ : public education
	{
	public:
		high_educ(int mon) : education(mon, educ::coll) {};
		std::string get_name_for() { return "������ �����������"; };
		static std::string get_name() { return "������ �����������"; };
		virtual educ type() const { return educ::high; }
	};
}