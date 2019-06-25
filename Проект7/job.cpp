#include"job.h"

namespace game_231
{
	job::job(std::string name, int money, int life, int happy, cloth _cl, cars _cr, educ _ed) :
		_name(name), _money(money), _happy(happy), _life(life), _clothes(_cl), _cars(_cr), _education(_ed)
	{

	}
	bool job::operator() (player& pl)
	{
		if (!pl.have_obj(_clothes, _cars, _education))
			return false;
		pl.plus_money(_money);
		pl.minus_happienes(_happy);
		pl.minus_life(_life);
		return true;
	}
	std::string job::get_name() 
	{
		return _name;
	}
	int job::get_money() { return _money; };
}