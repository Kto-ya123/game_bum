#pragma once
#include"costume.h"
namespace game_231
{
	class usual_clothes : public clothes
	{
	public:
		usual_clothes(int mon) : clothes(mon, cloth::not_have_clothes) {};
		std::string get_name_for() { return "Обычная одежда"; };
		static std::string get_name() { return "Обычная одежда"; };
		cloth type() const { return cloth::usual; };
	};
}