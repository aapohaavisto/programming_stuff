#include "main.h"

using namespace std; // better

/*Aapo::Aapo()
{
	aeg = 5;
	naem = "moi oon aapo";
}*/

Aapo::Aapo(): aeg(5), naem("moi oon aapo") {};

Aapo::Aapo(int age, string name) :
	aeg(age), naem(name) {};

Aapo aapo;
Aapo aapo2(10,"moi");

int main()
{
	cout << aapo.aeg << aapo.naem << '\n';
	cout << aapo2.aeg << aapo2.naem << '\n';
	x = square(5);
	cout << x << '\n';
}

int square(int n)
{
	return n*n;
}