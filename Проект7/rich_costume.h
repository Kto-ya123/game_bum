#pragma once
#include"costume.h"
namespace game_231
{
	class rich_costume : public clothes
	{
	public:
		rich_costume(int mon) : clothes(mon, cloth::cost) {};
		std::string get_name_for() { return "������ rich_bitch"; };
		static std::string get_name() { return "������ rich_bitch"; };
		cloth type() const { return cloth::rich_cost; };
	};
}
