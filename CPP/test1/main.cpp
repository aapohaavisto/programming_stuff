#include <iostream>
#include <sstream>
#include <iomanip>

/*
int main()
{
	std::cout << "Hello\n";
	return 0;
}
*/

using namespace std;

/*
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << i << "kanakanakanakana ";
	}
	cout << '\n';

	// return 0;
}
*/

int main()
{
	string s;
	for (int i=1; i<10; ++i)
	{
		for (int k=1; k<10; ++k)
		{
			stringstream ss;
			ss << setw(3) << i*k;

   			cout << ss.str();
		}

	cout << '\n';
	}
}
