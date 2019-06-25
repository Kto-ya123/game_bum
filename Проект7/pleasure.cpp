#include"pleasure.h"

namespace game_231
{
	pleasure::pleasure(std::string name, int money, int life, int happy, cloth _cl, cars car) :
		_name(name), _money(money), _happy(happy), _life(life), _clothes(_cl), _car(car)
	{

	}
	bool pleasure::operator() (player& pl)
	{
		if (!pl.have_obj(_clothes, _car))
			return false;
		pl.minus_money(_money);
		pl.plus_happienes(_happy);
		pl.plus_life(_life);
		return true;
	}
	std::string pleasure::get_name()
	{
		return _name;
	}
	int pleasure::get_money() { return _money; };
}