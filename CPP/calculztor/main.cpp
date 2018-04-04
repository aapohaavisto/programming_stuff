#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char** argv)
{
	using namespace std;

	if (argc == 1) { return 0; }

	/*for (int i = 0; i < argc; ++i)
	{
		cout << argv[i] << ' ';
	}
	cout << '\n';*/

	while (true)
	{
		float a, b;
		string op;
		cin >> a >> op >> b;
		float output;

		switch (op[0])
		{
		default:
			cout << "invalid operator!\n";
			break;
		case '+':
			output=a+b;
			break;
		case '-':
			output=a-b;
			break;

		}
		cout << output << '\n';
	}

}