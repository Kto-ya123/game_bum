#pragma once
namespace game_231
{
	class pointer
	{
	public:
		pointer(int a, int val = 1) :size(a), value(val) {}
		void operator++() { value++; check('l'); }
		void operator--() { value--; check('h'); }
		int get_val() { return value; };
		void set_val(int val) { value = val; }
	private:
		void check(char a) 
		{
			if (value > size)
				value = 1;
			else if (value == 0)
				value = size;
			else if (value == (size - 1))
			{
				if (a == 'h')
					value--;
				else
					value++;
					
			}
		};
		int value;
		int size;
	};
}
