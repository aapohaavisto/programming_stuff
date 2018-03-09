#include <iostream>

int *ap;

int a = 5;

int main(int argc, char **argv)
{
	ap = &a;

	std::cout << ap << ' '
		<< &ap << ' '
		<< &a << ' '
		<< a << '\n';

	(*ap) ++;

	std::cout << a << ' ' << 
		argc << '\n';

	return 0;
}