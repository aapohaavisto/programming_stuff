#include <iostream>
#include <cmath>

int *p;

int main()
{
	p = new(int[10]);
	for (int i = 0; i < 10; ++i)
	{
		// p[i] = i;
		*(p + i) = i;
	}

	for (int i = 0; i < 10; ++i)
	{
		std::cout << p[i] 
			<< ' ' 
			<< &p[i]
			<< ' ' 
			<< p + i
			<< '\n';
	}
}