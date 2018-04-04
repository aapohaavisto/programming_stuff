#include <iostream>
// using namespace std; // bad practice

int x; // header files dont declare variables
int square(int); // prototype

struct Aapo
{
	int aeg;
	std::string naem;
	Aapo (void);
	Aapo (int, std::string);
};