#include <iostream>

int square(int num)
{
	return num*num;
}
std::string square(char merk)
{
	std::string out(1,merk);
	out += merk;
	return out;
}
void add5(void *mem)
{
	*((int*) mem) += 5;
}

int main()
{
	std::cout<<square('a')<<'\n';
	std::cout<<'a'<<'\n';
	char * ap = new char('1');
	int * dp = new int(100);
	std::cout << dp << ' ' << *dp << '\n';
	add5(ap);
	std::cout << (void*) ap << ' ' << *ap << '\n';
	std::cout << dp << ' ' << *dp << '\n';
	delete ap;
	delete dp;
}