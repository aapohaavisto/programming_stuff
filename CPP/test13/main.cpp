#include <iostream>
using namespace std;

// #define private public // loool :D

struct Age
{
	int years;
	int months;
	int days;
};

class mammi
{
private:
	int calories;
	int weight;
	Age age;
public:
	// prototypes

	// constructor
	mammi(int,int,Age);
	// destructor
	~mammi();
	Age get_age();
	int get_calories();
	int get_weight();
	void eat(double);
};
mammi::mammi(int _calories,int _weight,Age _age):
	// nimi(arvo), ...
	calories(_calories),weight(_weight),age(_age)
	{ cout << "mammia\n"; }
mammi::~mammi()
{ cout << weight << "g mammia heitettiin pois\n"; }
Age mammi::get_age() { return age; }
int mammi::get_calories() { return calories; }
int mammi::get_weight() { return weight; }
void mammi::eat(double fraction)
{
	calories *= 1.-fraction;
	weight *= 1.-fraction;
}

mammi aaponmammi(2000,400,
	(Age) {.years=1, .months=4, .days=32});
int main()
{
	for (int i = 1; i <= 2; ++i)
	{
		int cals = aaponmammi.get_calories(),
			grams = aaponmammi.get_weight();

		aaponmammi.eat(i/5.f);
		cout << "aapo soi " << grams -
aaponmammi.get_weight() << "g jossa oli "<<cals - aaponmammi.get_calories() << "kcal\n";
	}
}