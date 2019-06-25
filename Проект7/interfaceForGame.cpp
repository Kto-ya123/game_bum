#include"game.h"
namespace game_231
{
	class interfaceForGame
	{
	public:
		void start()
		{
			menu();
		}
		interfaceForGame(game gm) :Game(gm) { };
	private:


		void menu() {
		while (Game.play.zhiv()) {  //проверка на то что персонаж жив
		pointer num(Game._menu.size()); //указывает на выбираемый пункт
		do {

		system("cls");
		Game.play.statistic(); //вывод данных персонажа

		{
		for (int i(0); i < Game._menu.size(); i++)
		{
		if (num.get_val() == i + 1)
		std::cout << " ";
		std::cout << Game._menu[i] << std::endl;
		}
		}

		char point = _getch();
		if (point == '3')
		++num;
		else if (point == '6')
		--num;
		else if (point == 13)
		break;
		else if (point == 27)
		{
		num.set_val(Game._menu.size());
		break;
		}

		} while (1);
		if (num.get_val())
		{
		switch (num.get_val())
		{
		case 1: choose_job();
		break;
		case 2: choose_eat();
		break;
		case 3: choose_pleasure();
		break;
		case 4: choose_cars();
		break;
		case 5: choose_education();
		break;
		case 6: choose_clothes();
		break;
		case 7:
		break;
		case 8:
		break;
		case 10:
		return;
		}
		}
		}

		}
		void choose_job() {
		pointer num(Game.job_for.size() + 2);
		do {

		do {
		system("cls");
		Game.play.statistic();//вывод данных персонажа

		for (int i(0); i < Game.job_for.size(); i++) //вывод всевозможных работ
		{
		if (num.get_val() == i + 1)
		std::cout << ' ';

		std::cout << Game.job_for[i].get_name() << " - "
		<< Game.job_for[i].get_money() << '$' << std::endl;
		}

		std::cout << std::endl;
		if (num.get_val() == Game.job_for.size() + 2)
		std::cout << ' ';
		std::cout << "Выход\n";

		char point = _getch();
		if (point == '3')
		++num;
		else if (point == '6')
		--num;
		else if (point == 13)
		break;
		else if (point == 27)
		{
		num.set_val(Game.job_for.size() + 2);
		break;
		}

		} while (1);
		if (num.get_val() <= Game.job_for.size() && num.get_val() > 0)
		{
			Game.job_for[num.get_val() - 1](Game.play);
			Game.play.check_life_happy();// проверка на показатели жизни и показатели счастья
		}
		} while (num.get_val() != (Game.job_for.size() + 2) && Game.play.zhiv());
		}
		void choose_pleasure() {
		pointer num(Game.pleasure_for.size() + 2);
		do {

		do {
		system("cls");
		Game.play.statistic();//вывод данных персонажа

		for (int i(0); i < Game.pleasure_for.size(); i++) //вывод всевозможных работ
		{
		if (num.get_val() == i + 1)
		std::cout << ' ';

		std::cout << Game.pleasure_for[i].get_name() << " - "
		<< Game.pleasure_for[i].get_money() << '$' << std::endl;
		}

		std::cout << std::endl;
		if (num.get_val() == Game.pleasure_for.size() + 2)
		std::cout << ' ';
		std::cout << "Выход\n";

		char point = _getch();
		if (point == '3')
		++num;
		else if (point == '6')
		--num;
		else if (point == 13)
		break;
		else if (point == 27)
		{
		num.set_val(Game.pleasure_for.size() + 2);
		break;
		}

		} while (1);
		if (num.get_val() <= Game.pleasure_for.size() && num.get_val() > 0)
		{
			Game.pleasure_for[num.get_val() - 1](Game.play);
		Game.play.check_life_happy();// проверка на показатели жизни и показатели счастья
		}
		} while (num.get_val() != (Game.pleasure_for.size() + 2) && Game.play.zhiv());
		}
		void choose_eat()
		{
		pointer num(Game.eat_for.size() + 2);
		do {
		do {
		system("cls");
		Game.play.statistic();
		{
		for (int i(0); i < Game.eat_for.size(); i++) //вывод всевозможной еды
		{
		if (num.get_val() == i + 1)
		std::cout << ' ';

		std::cout << Game.eat_for[i].get_name() << " - "
		<< Game.eat_for[i].get_money() << '$' << std::endl;
		}
		std::cout << std::endl;
		if (num.get_val() == Game.eat_for.size() + 2)
		std::cout << ' ';
		std::cout << "Выход\n";
		}
		char point = _getch();
		if (point == '3')
		++num;
		else if (point == '6')
		--num;
		else if (point == 13)
		break;
		else if (point == 27)
		{
		num.set_val(Game.eat_for.size() + 2);
		break;
		}

		} while (1);
		if (num.get_val() <= Game.eat_for.size() && num.get_val() > 0)
		{
			Game.eat_for[num.get_val() - 1](Game.play);
			Game.play.check_life_happy();
		}
		} while (num.get_val() != (Game.eat_for.size() + 2) && Game.play.zhiv());

		}
		void choose_education()
		{
		pointer num(Game.sell_educ.size() + 2);
		do {
		do {
		system("cls");
		Game.play.statistic();//вывод данных персонажа

		for (int i(0); i < Game.sell_educ.size(); i++) //вывод всевозможных работ
		{
		if (num.get_val() == i + 1)
		std::cout << ' ';

		std::cout << Game.sell_educ[i]->get_name_for() << " - "
		<< Game.sell_educ[i]->get_money() << '$' << std::endl;
		}

		std::cout << std::endl;


		if (num.get_val() == Game.sell_educ.size() + 2)
		std::cout << ' ';
		std::cout << "Выход\n";


		char point = _getch();
		if (point == '3')
		++num;
		else if (point == '6')
		--num;
		else if (point == 13)
		break;
		else if (point == 27)
		{
		num.set_val(Game.sell_educ.size() + 2);
		break;
		}

		} while (1);
		if (num.get_val() <= Game.sell_educ.size() && num.get_val() > 0)
		{
		if (Game.play.have_obj(cloth::not_have_clothes,cars::not_have_cars, Game.sell_educ[num.get_val() - 1]->need_have()))
		{
		if (Game.play.have_educ(Game.sell_educ[num.get_val() - 1]->type()))
		{
		std::cout << "\nУже приобретено" << std::endl;
		_getch();
		Game.play._day--;
		}
		else
		{
		if (Game.play.minus_money(Game.sell_educ[num.get_val() - 1]->get_money()))
		{

		switch (Game.sell_educ[num.get_val() - 1]->type())
		{
		case educ::b_deal: Game.play.player_educ.push_back(std::make_shared<bank_deal>(Game.sell_educ[num.get_val() - 1]->get_money()));
		break;
		case educ::coll:   Game.play.player_educ.push_back(std::make_shared<college>(Game.sell_educ[num.get_val() - 1]->get_money()));
		break;
		case educ::c_it:   Game.play.player_educ.push_back(std::make_shared<course_it>(Game.sell_educ[num.get_val() - 1]->get_money()));
		break;
		case educ::c_sh:   Game.play.player_educ.push_back(std::make_shared<course_kass>(Game.sell_educ[num.get_val() - 1]->get_money()));
		break;
		case educ::drive:  Game.play.player_educ.push_back(std::make_shared<driven_educ>(Game.sell_educ[num.get_val() - 1]->get_money()));
		break;
		case educ::high:  Game.play.player_educ.push_back(std::make_shared<high_educ>(Game.sell_educ[num.get_val() - 1]->get_money()));
		break;
		}
		}
		}
		}
		Game.play.check_life_happy();// проверка на показатели жизни и показатели счастья



		}
		} while (num.get_val() != (Game.sell_educ.size() + 2) && Game.play.zhiv());
		}
		void choose_cars()
		{
		pointer num(Game.sell_cars.size() + 2);
		do {
		do {
		system("cls");
		Game.play.statistic();//вывод данных персонажа

		for (int i(0); i < Game.sell_cars.size(); i++) //вывод всевозможных работ
		{
		if (num.get_val() == i + 1)
		std::cout << ' ';

		std::cout << Game.sell_cars[i]->get_name_for() << " - "
		<< Game.sell_cars[i]->get_money() << '$' << std::endl;
		}

		std::cout << std::endl;


		if (num.get_val() == Game.sell_cars.size() + 2)
		std::cout << ' ';
		std::cout << "Выход\n";


		char point = _getch();
		if (point == '3')
		++num;
		else if (point == '6')
		--num;
		else if (point == 13)
		break;
		else if (point == 27)
		{
		num.set_val(Game.sell_cars.size() + 2);
		break;
		}

		} while (1);
		if (num.get_val() <= Game.sell_cars.size() && num.get_val() > 0)
		{
		if (Game.play.have_obj(cloth::not_have_clothes, Game.sell_cars[num.get_val() - 1]->need_have(), educ::drive))
		{
		if (Game.play.have_cars(Game.sell_cars[num.get_val() - 1]->type()))
		{
		std::cout << "\nУже приобретено" << std::endl;
		_getch();
		Game.play._day--;
		}
		else
		{
		if (Game.play.minus_money(Game.sell_cars[num.get_val() - 1]->get_money()))
		{
		switch (Game.sell_cars[num.get_val() - 1]->type())
		{
		case cars::zhiga: Game.play.player_cars.push_back(std::make_shared<zhiga_car>(Game.sell_cars[num.get_val() - 1]->get_money()));
		break;
		case cars::mers: Game.play.player_cars.push_back(std::make_shared<mers_car>(Game.sell_cars[num.get_val() - 1]->get_money()));
		break;
		case cars::rolls:Game.play.player_cars.push_back(std::make_shared<rolls_car>(Game.sell_cars[num.get_val() - 1]->get_money()));
		break;
		}
		}
		}
		}
		Game.play.check_life_happy();// проверка на показатели жизни и показатели счастья



		}
		} while (num.get_val() != (Game.sell_cars.size() + 2) && Game.play.zhiv());
		}
		void choose_clothes()
		{
		pointer num(Game.sell_clothes.size() + 2);
		do {
		do {
		system("cls");
		Game.play.statistic();//вывод данных персонажа

		for (int i(0); i < Game.sell_clothes.size(); i++) //вывод всевозможных работ
		{
		if (num.get_val() == i + 1)
		std::cout << ' ';

		std::cout << Game.sell_clothes[i]->get_name_for() << " - "
		<< Game.sell_clothes[i]->get_money() << '$' << std::endl;
		}

		std::cout << std::endl;


		if (num.get_val() == Game.sell_clothes.size() + 2)
		std::cout << ' ';
		std::cout << "Выход\n";


		char point = _getch();
		if (point == '3')
		++num;
		else if (point == '6')
		--num;
		else if (point == 13)
		break;
		else if (point == 27)
		{
		num.set_val(Game.sell_clothes.size() + 2);
		break;
		}

		} while (1);
		if (num.get_val() <= Game.sell_clothes.size() && num.get_val() > 0)
		{
		if (Game.play.have_obj(Game.sell_clothes[num.get_val() - 1]->need_have(), cars::not_have_cars, educ::not_have_education))
		{
		if (Game.play.have_clothes(Game.sell_clothes[num.get_val() - 1]->type()))
		{
		std::cout << "\nУже приобретено" << std::endl;
		_getch();
		Game.play._day--;
		}
		else
		{
		if (Game.play.minus_money(Game.sell_clothes[num.get_val() - 1]->get_money()))
		{
		switch (Game.sell_clothes[num.get_val() - 1]->type())
		{
		case cloth::usual:     Game.play.player_clothes.push_back(std::make_shared<usual_clothes>(Game.sell_clothes[num.get_val() - 1]->get_money()));
			break;
		case cloth::spec:	   Game.play.player_clothes.push_back(std::make_shared<special_clothes>(Game.sell_clothes[num.get_val() - 1]->get_money()));
			break;
		case cloth::cost:      Game.play.player_clothes.push_back(std::make_shared<costume>(Game.sell_clothes[num.get_val() - 1]->get_money()));
			break;
		case cloth::rich_cost: Game.play.player_clothes.push_back(std::make_shared<rich_costume>(Game.sell_clothes[num.get_val() - 1]->get_money()));
			break;
		}
		}
		}
		}
		Game.play.check_life_happy();// проверка на показатели жизни и показатели счастья

		}
		} while (num.get_val() != (Game.sell_clothes.size() + 2) && Game.play.zhiv());
		}
		
			
	private:
		game Game;
	};
}