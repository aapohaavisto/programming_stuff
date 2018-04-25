#include <iostream>

using namespace std;
// nyt voidaan kayttaa ilman std::

namespace aapon_lait
{
	string laki1 = "ei lakeja";
	int maara = 10;
	float rating_on_imdb = 9.8;
}

int main()
{
	cout << "moi2\n";
	cout << aapon_lait::laki1 << '\n';

	using namespace aapon_lait;
	cout << "aapon rating_on_imdb: " << rating_on_imdb << '\n';
}