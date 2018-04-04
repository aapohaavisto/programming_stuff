#include <iostream>
#include <cmath>

int *p;

int main()
{
	p = new(int[10]);
	// int *vp=p;
	for (int i = 0; i < 10; ++i)
	{
		p[i] = i;
		// *(p + i) = i;
		//*p = i;
		// p++;
	}
	// p=vp;
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