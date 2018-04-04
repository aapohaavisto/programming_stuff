#include <iostream>
#include "config.h"

#define a 5
// preprocessor macro function
#define f(a,b) for(int a = 0; a < b; ++a)

int main()
{
	int x = 1;
	std::cout << a << ' ' << kana << "a tiella\n";
	// std::cout << &a << '\n'; // error
#if (a==5)
	int b = 0;
#else
	int a = 0;
#endif

	f(i, 10)
	{
		std::cout << i;
	}
}