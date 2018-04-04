#include <iostream>

int a;
unsigned int b;

short c;

char d;

long e;

uint64_t s;

int main()
{
	// 8 bittia tavussa
	std::cout << sizeof(a) << '\n';
	std::cout << sizeof(b) << '\n';
	std::cout << sizeof(c) << '\n';
	std::cout << sizeof(d) << '\n';
	std::cout << sizeof(e) << '\n';
	std::cout << sizeof(s) << '\n';
}