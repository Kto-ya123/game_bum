#include"game.h"
namespace game_231
{
	game::game(player pl) : play(pl)
	{
		init_menu(); //������������� ����
		init_eat(); //������������� ���
		init_pleasure(); //������������� ������
		init_job(); //������������� ������
		init_cars(); //������������� ����
		init_education();//������������� �����������
		init_clothes();//������������� ������
		//menu();
	};

	//������ ////////////////////////
	void game::init_menu() //������������� ����
	{
		_menu =
		{
			"������",
			"���",
			"�����",
			"����",
			"�����������",
			"������",
			"���������",
			"������",
			"",
			"�����"
		};
	}
	void game::init_job()
	{
		//������ ����� {���, ������, �����, �������}
		job_for = { { "������� �� �������", 2, 4, 5 },
					{ "�������� �������", 4, 8, 7 },
					{ "����������� ���������", 8, 16, 10 },
					{ "������ �����", 15, 7, 10, cloth::usual },
					{ "��������� �����", 40, 7, 8, cloth::usual, cars::zhiga, educ::drive },
					{ "������" , 90, 8, 8, cloth::usual, cars::not_have_cars, educ::c_sh },
					{ "������", 200, 9, 8, cloth::spec, cars::zhiga, educ::coll },
					{ "�������", 400, 10, 8, cloth::spec, cars::zhiga, educ::high },
					{ "������", 1000, 9, 8, cloth::cost, cars::mers, educ::high },
					{ "IT-����������", 2000, 10, 8, cloth::cost, cars::mers, educ::c_it },
					{ "������", 5000, 8, 8, cloth::rich_cost, cars::mers, educ::b_deal } };
	}
	void game::init_eat()
	{
		eat_for = { { "������� � �������", 1, 7 },
					{ "������ � ������", 3, 10 },
					{ "��������� � ��������", 7, 10, 7, cloth::usual },
					{ "������� � ������", 13, 15, 12, cloth::usual },
					{ "������� � �������", 20, 20, 17, cloth::usual },
					{ "��������� � ��������� ���������", 40, 27, 20, cloth::cost },
					{ "������� � ������� ��������", 120, 35, 30, cloth::rich_cost } };
	}
	void game::init_pleasure()
	{
		pleasure_for = { {"����������� �� ������", 0, 0, 4},
						{"����������� �� �����", 0, 0 , 8, cloth::usual},
						{"�������� �� ������ ���������", 4, 0, 16, cloth::usual},
						{"������� � ����", 10, 0, 20, cloth::usual },
						{"������� � �����", 26, 0, 35, cloth::cost}};
	}
	void game::init_cars()
	{
		sell_cars = { {std::make_shared<zhiga_car>(500)},
		{std::make_shared<mers_car>(25000)},
		{std::make_shared<rolls_car>(100000) }
		};
	}
	void game::init_clothes()
	{
		sell_clothes = {
			std::make_shared<usual_clothes>(50),
			std::make_shared<special_clothes>(200),
			std::make_shared<costume>(1000),
			std::make_shared<rich_costume>(10000)
		};
	};
	void game::init_education()
	{
		sell_educ = {
			std::make_shared<driven_educ>(300),
			std::make_shared<course_kass>(200),
			std::make_shared<college>(1000),
			std::make_shared<high_educ>(5000),
			std::make_shared<course_it>(3000),
			std::make_shared<bank_deal>(7000)
		};
	}
	/////////////////////////////////
	
	


	
	
	/*void game::menu() {
		while (play.zhiv()) {  //�������� �� �� ��� �������� ���
			pointer num(_menu.size()); //��������� �� ���������� �����
			do {

				system("cls");
				play.statistic(); //����� ������ ���������

				{
					for (int i(0); i < _menu.size(); i++)
					{
						if (num.get_val() == i + 1)
							std::cout << " ";
						std::cout << _menu[i] << std::endl;
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
					num.set_val(_menu.size());
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
	void game::choose_job() {
		pointer num(job_for.size() + 2);
		do {

			do {
				system("cls");
				play.statistic();//����� ������ ���������

				for (int i(0); i < job_for.size(); i++) //����� ������������ �����
				{
					if (num.get_val() == i + 1)
						std::cout << ' ';

					std::cout << job_for[i].get_name() << " - "
						<< job_for[i].get_money() << '$' << std::endl;
				}

				std::cout << std::endl;
				if (num.get_val() == job_for.size() + 2)
					std::cout << ' ';
				std::cout << "�����\n";

				char point = _getch();
				if (point == '3')
					++num;
				else if (point == '6')
					--num;
				else if (point == 13)
					break;
				else if (point == 27)
				{
					num.set_val(job_for.size() + 2);
					break;
				}

			} while (1);
			if (num.get_val() <= job_for.size() && num.get_val() > 0)
			{
				job_for[num.get_val() - 1](play);
				play.check_life_happy();// �������� �� ���������� ����� � ���������� �������
			}
		} while (num.get_val() != (job_for.size() + 2) && play.zhiv());
	}
	void game::choose_pleasure() {
		pointer num(pleasure_for.size() + 2);
		do {

			do {
				system("cls");
				play.statistic();//����� ������ ���������

				for (int i(0); i < pleasure_for.size(); i++) //����� ������������ �����
				{
					if (num.get_val() == i + 1)
						std::cout << ' ';

					std::cout << pleasure_for[i].get_name() << " - "
						<< pleasure_for[i].get_money() << '$' << std::endl;
				}

				std::cout << std::endl;
				if (num.get_val() == pleasure_for.size() + 2)
					std::cout << ' ';
				std::cout << "�����\n";

				char point = _getch();
				if (point == '3')
					++num;
				else if (point == '6')
					--num;
				else if (point == 13)
					break;
				else if (point == 27)
				{
					num.set_val(pleasure_for.size() + 2);
					break;
				}

			} while (1);
			if (num.get_val() <= pleasure_for.size() && num.get_val() > 0)
			{
				pleasure_for[num.get_val() - 1](play);
				play.check_life_happy();// �������� �� ���������� ����� � ���������� �������
			}
		} while (num.get_val() != (pleasure_for.size() + 2) && play.zhiv());
	}
	void game::choose_eat()
	{
		pointer num(eat_for.size() + 2);
		do {
			do {
				system("cls");
				play.statistic();
				{
					for (int i(0); i < eat_for.size(); i++) //����� ������������ ���
					{
						if (num.get_val() == i + 1)
							std::cout << ' ';

						std::cout << eat_for[i].get_name() << " - "
							<< eat_for[i].get_money() << '$' << std::endl;
					}
					std::cout << std::endl;
					if (num.get_val() == eat_for.size() + 2)
						std::cout << ' ';
					std::cout << "�����\n";
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
					num.set_val(eat_for.size() + 2);
					break;
				}

			} while (1);
			if (num.get_val() <= eat_for.size() && num.get_val() > 0)
			{
				eat_for[num.get_val() - 1](play);
				play.check_life_happy();
			}
		} while (num.get_val() != (eat_for.size() + 2) && play.zhiv());

	}
	void game::choose_education() 
	{
		pointer num(sell_educ.size() + 2);
		do {
			do {
				system("cls");
				play.statistic();//����� ������ ���������

				for (int i(0); i < sell_educ.size(); i++) //����� ������������ �����
				{
					if (num.get_val() == i + 1)
						std::cout << ' ';

					std::cout << sell_educ[i]->get_name_for() << " - "
						<< sell_educ[i]->get_money() << '$' << std::endl;
				}

				std::cout << std::endl;


				if (num.get_val() == sell_educ.size() + 2)
					std::cout << ' ';
				std::cout << "�����\n";


				char point = _getch();
				if (point == '3')
					++num;
				else if (point == '6')
					--num;
				else if (point == 13)
					break;
				else if (point == 27)
				{
					num.set_val(sell_educ.size() + 2);
					break;
				}

			} while (1);
			if (num.get_val() <= sell_educ.size() && num.get_val() > 0)
			{
				if (play.have_obj(cloth::not_have_clothes,cars::not_have_cars, sell_educ[num.get_val() - 1]->need_have()))
				{
					if (play.have_educ(sell_educ[num.get_val() - 1]->type()))
					{
						std::cout << "\n��� �����������" << std::endl;
						_getch();
						play._day--;
					}
					else
					{
						if (play.minus_money(sell_educ[num.get_val() - 1]->get_money()))
						{

							switch (sell_educ[num.get_val() - 1]->type())
							{
							case educ::b_deal: play.player_educ.push_back(std::make_shared<bank_deal>(sell_educ[num.get_val() - 1]->get_money()));
								break;
							case educ::coll:   play.player_educ.push_back(std::make_shared<college>(sell_educ[num.get_val() - 1]->get_money()));
								break;
							case educ::c_it:   play.player_educ.push_back(std::make_shared<course_it>(sell_educ[num.get_val() - 1]->get_money()));
								break;
							case educ::c_sh:   play.player_educ.push_back(std::make_shared<course_kass>(sell_educ[num.get_val() - 1]->get_money()));
								break;
							case educ::drive:  play.player_educ.push_back(std::make_shared<driven_educ>(sell_educ[num.get_val() - 1]->get_money()));
								break;
							case educ::high:   play.player_educ.push_back(std::make_shared<high_educ>(sell_educ[num.get_val() - 1]->get_money()));
								break;
							}
						}
					}
				}
				play.check_life_happy();// �������� �� ���������� ����� � ���������� �������



			}
		} while (num.get_val() != (sell_educ.size() + 2) && play.zhiv());
	}
	void game::choose_cars()
	{
		pointer num(sell_cars.size() + 2);
		do {
			do {
				system("cls");
				play.statistic();//����� ������ ���������

				for (int i(0); i < sell_cars.size(); i++) //����� ������������ �����
				{
					if (num.get_val() == i + 1)
						std::cout << ' ';

					std::cout << sell_cars[i]->get_name_for() << " - "
						<< sell_cars[i]->get_money() << '$' << std::endl;
				}

				std::cout << std::endl;


				if (num.get_val() == sell_cars.size() + 2)
					std::cout << ' ';
				std::cout << "�����\n";


				char point = _getch();
				if (point == '3')
					++num;
				else if (point == '6')
					--num;
				else if (point == 13)
					break;
				else if (point == 27)
				{
					num.set_val(sell_cars.size() + 2);
					break;
				}

			} while (1);
			if (num.get_val() <= sell_cars.size() && num.get_val() > 0)
			{
				if (play.have_obj(cloth::not_have_clothes, sell_cars[num.get_val() - 1]->need_have(), educ::drive))
				{
					if (play.have_cars(sell_cars[num.get_val() - 1]->type()))
					{
						std::cout << "\n��� �����������" << std::endl;
						_getch();
						play._day--;
					}
					else
					{
						if (play.minus_money(sell_cars[num.get_val() - 1]->get_money()))
						{
							switch (sell_cars[num.get_val() - 1]->type())
							{
							case cars::zhiga: play.player_cars.push_back(std::make_shared<zhiga_car>(sell_cars[num.get_val() - 1]->get_money()));
								break;
							case cars::mers: play.player_cars.push_back(std::make_shared<mers_car>(sell_cars[num.get_val() - 1]->get_money()));
								break;
							case cars::rolls:play.player_cars.push_back(std::make_shared<rolls_car>(sell_cars[num.get_val() - 1]->get_money()));
								break;
							}
						}
					}
				}
				play.check_life_happy();// �������� �� ���������� ����� � ���������� �������

					

			}
		} while (num.get_val() != (sell_cars.size() + 2) && play.zhiv());
	}
	void game::choose_clothes()
	{
		pointer num(sell_clothes.size() + 2);
		do {
			do {
				system("cls");
				play.statistic();//����� ������ ���������

				for (int i(0); i < sell_clothes.size(); i++) //����� ������������ �����
				{
					if (num.get_val() == i + 1)
						std::cout << ' ';

					std::cout << sell_clothes[i]->get_name_for() << " - "
						<< sell_clothes[i]->get_money() << '$' << std::endl;
				}

				std::cout << std::endl;


				if (num.get_val() == sell_clothes.size() + 2)
					std::cout << ' ';
				std::cout << "�����\n";


				char point = _getch();
				if (point == '3')
					++num;
				else if (point == '6')
					--num;
				else if (point == 13)
					break;
				else if (point == 27)
				{
					num.set_val(sell_clothes.size() + 2);
					break;
				}

			} while (1);
			if (num.get_val() <= sell_clothes.size() && num.get_val() > 0)
			{
				if (play.have_obj(sell_clothes[num.get_val() - 1]->need_have(), cars::not_have_cars, educ::not_have_education))
				{
					if (play.have_clothes(sell_clothes[num.get_val() - 1]->type()))
					{
						std::cout << "\n��� �����������" << std::endl;
						_getch();
						play._day--;
					}
					else
					{
						if (play.minus_money(sell_clothes[num.get_val() - 1]->get_money()))
						{
							switch (sell_clothes[num.get_val() - 1]->type())
							{
							case cloth::usual:     play.player_clothes.push_back(std::make_shared<usual_clothes>(sell_clothes[num.get_val() - 1]->get_money()));
								break;
							case cloth::spec:	   play.player_clothes.push_back(std::make_shared<special_clothes>(sell_clothes[num.get_val() - 1]->get_money()));
								break;
							case cloth::cost:      play.player_clothes.push_back(std::make_shared<costume>(sell_clothes[num.get_val() - 1]->get_money()));
								break;
							case cloth::rich_cost: play.player_clothes.push_back(std::make_shared<rich_costume>(sell_clothes[num.get_val() - 1]->get_money()));
								break;
							}
						}
					}
				}
				play.check_life_happy();// �������� �� ���������� ����� � ���������� �������

			}
		} while (num.get_val() != (sell_clothes.size() + 2) && play.zhiv());
	}
	*/

}
