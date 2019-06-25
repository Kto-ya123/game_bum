#pragma once

enum educ {not_have_education, coll, high, c_sh, c_it, drive, b_deal};

class education 
{
public:

	virtual educ type() const { return educ::not_have_education; };
	education(int mon, educ _ed) : _money(mon), _education(_ed) {}
	virtual std::string get_name_for() { return ""; };
	educ need_have() { return _education; }
	int get_money() { return _money; }
protected:
	int _money;
	educ _education;
};
