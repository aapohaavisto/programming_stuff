#include <iostream>
#include <string>
#include <vector>

using namespace std;

string s1, s2 = "moi";
vector<char> v;

int main()
{
	cout << s1.size() << ' ' << s2.size() << '\n';
	s1 += s2 + " aapo";
	cout << s1 << '\n';

	if (s1 == "moi aapo") cout << "kylla\n";

	for (string::iterator i = s1.begin(); i != s1.end(); i++)
	{
		cout << *i;
		v.insert(v.begin(), (char) *i);
	}
	cout << '\n';
	for (auto c : v)
	{
		cout << c;
	}
	cout << '\n';
}