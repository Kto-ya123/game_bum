#pragma once

namespace game_231
{
	enum cloth { usual, cost, spec, rich_cost, not_have_clothes};

	class clothes
	{
	public:
		clothes(int mon, cloth _cloth) : _money(mon), _clothes(_cloth) {}
		virtual cloth type() const = 0;
		virtual std::string get_name_for() { return ""; };
		cloth need_have() { return _clothes; }
		int get_money() {return _money;}
	protected:
		int _money;
		cloth _clothes;
	};
}
	
	

