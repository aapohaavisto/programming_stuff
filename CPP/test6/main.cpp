#include <iostream>
#include <sstream>

struct aapo
{
	int age;
	int length;
	int expected_life_left;
	std::string name;

	aapo(int age, int length, int expected_life_left, std::string name) : age(age), length(length), expected_life_left(expected_life_left), name(name)
	{

	}

	// huono ala kayta
	void print_stuffs()
	{
		std::cout << name << " "
		<< age << "yrs "
		<< length << "cm "
		<< expected_life_left << "yrs\n";
	}
};
aapo aapoitse(10, 292, 9001, "Ei ainakaan aapo");
aapo *app = new aapo(100, 29, 0, "ainakaan aapo");

int main()
{
	aapoitse.print_stuffs();
	(*app).print_stuffs();
	app -> print_stuffs();
}