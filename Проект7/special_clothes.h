#pragma once
#include "clothes.h"
namespace game_231
{
	class special_clothes : public clothes
	{
	public:
		special_clothes(int mon) : clothes(mon, cloth::usual) {};
		std::string get_name_for() { return "����������� ������"; };
		static std::string get_name() { return "����������� ������"; };
		cloth type() const { return cloth::spec; };
	};
}

