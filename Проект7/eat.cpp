#include"eat.h"

namespace game_231
{
	eat::eat(std::string name, int money, int life, int happy, cloth _cl) :
		_name(name), _money(money), _happy(happy), _life(life), _clothes(_cl)
	{

	}
	bool eat::operator() (player& pl)
	{
		if (!pl.have_obj(_clothes))
			return false;
		pl.minus_money(_money);
		pl.plus_happienes(_happy);
		pl.plus_life(_life);
		return true;
	}
	std::string eat::get_name()
	{
		return _name;
	}
	int eat::get_money() { return _money; };
}