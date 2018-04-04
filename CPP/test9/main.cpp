#include <iostream>


int main()
{
	{
		{
			int c = 4;
			{
				int a = 5;
				{
					std::cout << a << "\n";
				}
			}
			{
				int b = 6;
				std::cout << c << b << '\n';
				// std::cout << a << '\n'; // error
			}
		}
	}

	for (int i = 0; i < 2; ++i)
		std::cout << i << '\n';

	// i not defined here
	int i = 1;
}
