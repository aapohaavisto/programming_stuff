/*
 * Tämä tiedosto on CPP koe
 * tee ohjeviestissä lukeva tehtävä kommentin alle
 * jätä ohjeviestit paikoilleen
 * kun olet valmis tee commit muutoksista ja pushaa muutokset githubiin
 */

/* Lataa headerit: iostream (EXTRA main.h) */

#include "main.hpp"
// #include <iostream>


/* Tee luokka Vector3F jossa on       (EXTRA tee se tiedostoon main.h, jossa annat vain attribuuttien ja funktioiden prototyypit,
 * attribuutit: float x,y,z                  määritä funktiot kooditiedostossa main.cpp)
 * funktiot: 
 * - Vector3F(float,float,float), constructor asettaa oliolle arvot x,y,z
 * - operator+(Vector3F), overloaded operator jolla palautetaan uusi Vector3F jolla arvoina attribuuttien summat x1+x2,y1+y2,z1+z2
 * - myös operator- joka tekee saman kuin operator+ mutta ottaa erotuksen
 * - operator*(float), overloaded operator jolla palautetaan uusi Vector3F jonka kaikki x,y,z on skaalattu tekijällä
 * - operator=(Vector3F), overloaded operator jolla asetetaan tämän olion x,y,z argumentit toisen olion kanssa samoiksi
 */

//class Vector3F{


/*public:
	float x;
	float y;
	float z;
	Vector3F(float x, float y, float z):
		x(x), y(y), z(z) {}

	Vector3F operator+(Vector3F vec)
	{
		Vector3F temp(x+vec.x, y+vec.y,z +vec.z);
		return temp;
	}
	Vector3F operator-(Vector3F vec)
	{
		Vector3F temp(x-vec.x, y-vec.y, z-vec.z);
		return temp;
	}
	Vector3F operator*(float scale)
	{
		Vector3F temp(x*scale, y*scale, z*scale);
		return temp;

	}

	Vector3F operator=(Vector3F vec)
	{
		Vector3F temp(vec.x, vec.y, vec.z);
		return temp;
	}
	


};*/

Vector3F::Vector3F(float x, float y, float z):
x(x), y(y), z(z)
{}

Vector3F Vector3F::operator+(Vector3F vec)
{
	Vector3F temp(x+vec.x, y+vec.y,z +vec.z);
	return temp;
}

Vector3F Vector3F::operator-(Vector3F vec)
{
	Vector3F temp(x-vec.x, y-vec.y, z-vec.z);
	return temp;
}

Vector3F Vector3F::operator*(float scale)
{
	Vector3F temp(x*scale, y*scale, z*scale);
	return temp;

}

Vector3F Vector3F::operator=(Vector3F vec)
{
	Vector3F temp(vec.x, vec.y, vec.z);
	return temp;
}


void print_vector(Vector3F vec)
{
	std::cout << vec.x << " " << vec.y << " " << vec.z <<'\n' ;
}

Vector3F cross (Vector3F vec1, Vector3F vec2)
{
	Vector3F temp(
		vec1.y*vec2.z-vec1.z*vec2.y, 
		vec1.z*vec2.x-vec1.x*vec2.z,
		vec1.x*vec2.y-vec1.y*vec2.x
		);
	return temp;
}

/* EXTRA: tee ristitulofunktio cross http://wikipedia.org/wiki/Cross_Product#Computing_the_cross_product */

/* Tee funktio main jossa initialisoidaan kaksi Vector3F a,b instanssia ja annetaan niille käyttäjän valitsemat arvot (std::cin)
 * tulosta a,b x,y,z arvot
 * laske lasku (a+b)*(a.x*b.x+a.y*b.y+a.z*b.z) ja tulosta tuloksen x,y,z arvot
 * EXTRA ota a,b välinen ristitulo ja tulosta arvot
 *
 * esimerkki oikeasta toiminnasta:
 * Vector2F a(1,2,3), b(3,2,1);
 * Vector2F c = a + 2*b;
 * std::cout << c.x <<' '<< c.y <<' '<< c.z << '\n';
 * // tulostaisi:
 * // 7 6 5
 */





int main()
{
	/*std::string i1, i2, i3;
	std::cin >> i1 >> i2 >> i3;
	std::cout << i1 << ", "
		<< i2 << ", "
		<< i3 << '\n';*/
	float i, j, k;
	/*std::cout << "kerro vektorin yksi koordinaatit";*/
	std::cin >>i >>j >>k;
	Vector3F a (i, j, k);
	print_vector(a);
	std::cin >>i >>j >>k;
	Vector3F b (i, j, k);
	print_vector(b);
	print_vector((a+b)*(a.x*b.x+a.y*b.y+a.z*b.z));
	print_vector(cross(a,b));
};
