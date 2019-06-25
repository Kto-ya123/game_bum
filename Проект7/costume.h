#pragma once
#include"clothes.h"

namespace game_231
{
	class costume : public clothes
	{
	public:
		costume(int mon) : clothes(mon, cloth::usual) {};
		std::string get_name_for() { return "Костюм"; };
		static std::string get_name() { return "Костюм"; };
		cloth type() const { return cloth::cost; };
	};
}