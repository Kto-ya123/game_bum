#include"player.h"
namespace game_231
{
		player::player(std::string name, int money, int happienes,
			int life, int day, std::vector<std::shared_ptr<clothes>> _cl,
			std::vector<std::shared_ptr<car>> pl_c, std::vector<std::shared_ptr<education>> pl_ed) :
			_name(name), _money(money),
			_happienes(happienes), _life(life),
			_zh(true), player_clothes(_cl), player_cars(pl_c),
			player_educ(pl_ed), _day(day) {};

		std::string player::get_name() { return _name; }

		int player::get_money() { return _money; }

		int player::get_happienes() { return _happienes; }

		int player::get_life() { return _life; }

		int player::get_day() { return _day; }

		void player::plus_money(int money) { _money += money; }

		void player::plus_happienes(int happy)
		{
			if (_happienes + happy > 100)
			{
				_happienes = 100;
				return;
			}
			_happienes += happy;
		}

		void player::plus_life(int life)
		{
			if (_life + life > 100)
			{
				_life = 100;
				return;
			}
			_life += life;
		}

		bool player::minus_money(int money)
		{
			if ((_money - money) < 0)
			{
				std::cout << "\nНедостаточно средств" << std::endl;
				_getch();
				_day--;
				return false;
			}
			_money -= money;
			return true;
		}

		void player::minus_happienes(int happy) { _happienes -= happy; }

		void player::minus_life(int life) { _life -= life; }

		void player::statistic() 
		{

			std::cout << "Имя: " << std::setw(11) << get_name() << "||"
				<< "\nЖизнь: " << std::setw(9) << get_life() << "||"
				<< "\nСчастье: " << std::setw(7) << get_happienes() << "||"
				<< "\nДеньги: " << std::setw(8) << get_money() << "||"
				<< "\nДень: " << std::setw(10) << get_day() << "||" << std::endl;
			std::cout << std::setfill('=') << std::setw(18) << "||" << std::endl;
			std::cout << std::setfill(' ');
			std::cout << std::endl;

		}

		bool player::zhiv() { return _zh; }

		void player::check_life_happy()
		{
			static int life = 0;
			if (life == 2)
			{
				std::cout << "R.I.P - умер от голодовки" << std::endl;
				_zh = false;
				_getch();
				return;
			}
			if (_life <= 0)
			{
				_life = 0;
				life++;
				std::cout << "Поправь здоровье" << std::endl;
				_getch();
			}
			static int hap;
			if (hap == 5)
			{
				_zh = false;
				std::cout << "R.I.P - повешался" << std::endl;
				_getch();
				return;
			}
			if (_happienes < 0)
				_happienes = 0;
			if (_happienes < 10)
				hap++;
			else
				hap = 0;
			_day++;
		}
		bool player::have_clothes(cloth pl) {
			if (pl == cloth::not_have_clothes)
				return true;
			for (std::shared_ptr<clothes> const& prov : player_clothes)
			{
				if (prov->type() == pl)
					return true;
			}
			return false;
		}

		bool player::have_cars(cars pl) {
			if (pl == cars::not_have_cars)
				return true;
			for (std::shared_ptr<car> const& prov : player_cars)
			{
				if (prov->type() == pl)
					return true;
			}
			return false;
		}

		bool player::have_educ(educ pl) {
			if (pl == educ::not_have_education)
				return true;
			for (std::shared_ptr<education> const& prov : player_educ)
			{
				if (prov->type() == pl)
					return true;
			}
			return false;
		}

		bool player::have_obj(cloth _clothes, cars _cars, educ _education)
		{
			if (!have_cars(_cars))
			{
				std::cout << "\nНе хватает автомобиля: ";
				switch (_cars)
				{
				case cars::zhiga: std::cout << zhiga_car::get_name();
					break;
				case cars::mers:	std::cout << mers_car::get_name();
					break;
				case cars::rolls: std::cout << rolls_car::get_name();
					break;
				}
			}
			if (!have_clothes(_clothes))
			{
				std::cout << "\nНе хватает одежды: ";
				switch (_clothes)
				{
				case cloth::usual: std::cout << usual_clothes::get_name();
					break;
				case cloth::cost:	std::cout << costume::get_name();
					break;
				case cloth::spec: std::cout << special_clothes::get_name();
					break;
				case cloth::rich_cost: std::cout << rich_costume::get_name();
					break;
				}
			}
			if (!have_educ(_education))
			{
				std::cout << "\nНе хватает образования: ";
				switch (_education)
				{
				case educ::coll: std::cout << college::get_name();
					break;
				case educ::high: std::cout << high_educ::get_name();
					break;
				case educ::c_sh: std::cout << course_kass::get_name();
					break;
				case educ::c_it: std::cout << course_it::get_name();
					break;
				case educ::drive: std::cout << driven_educ::get_name();
					break;
				case educ::b_deal: std::cout << bank_deal::get_name();
					break;
				}
			}
			if (!have_clothes(_clothes) || !have_cars(_cars) || !have_educ(_education))
			{
				_getch();
				_day--;
				return false;
			}
			return true;
		}

}
