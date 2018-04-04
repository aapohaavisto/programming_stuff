#include <iostream>

int main()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			int o;
			if (i && j) o = 1;
			else o = 0;

			std::cout << (int) o << ' ';
		}
		std::cout << '\n';
	}

	int a = 0b10101, b = 0b11001;
	std::bitset<8> ba(a);
	std::bitset<8> bb(b);
	std::bitset<8> bc( a | b );
	std::cout << ba << ' ' << bb << '\n';
	std::cout << bc << '\n';
}