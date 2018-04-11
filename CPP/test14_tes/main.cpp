/*
 * Tämä tiedosto on CPP koe
 * tee ohjeviestissä lukeva tehtävä kommentin alle
 * jätä ohjeviestit paikoilleen
 * kun olet valmis tee commit muutoksista ja pushaa muutokset githubiin
 */

/* Lataa headerit: iostream (EXTRA main.h) */

/* Tee luokka Vector3F jossa on       (EXTRA tee se tiedostoon main.h, jossa annat vain attribuuttien ja funktioiden prototyypit,
 * attribuutit: float x,y,z                  määritä funktiot kooditiedostossa main.cpp)
 * funktiot: 
 * - Vector3F(float,float,float), constructor asettaa oliolle arvot x,y,z
 * - operator+(Vector3F), overloaded operator jolla palautetaan uusi Vector3F jolla arvoina attribuuttien summat x1+x2,y1+y2,z1+z2
 * - myös operator- joka tekee saman kuin operator+ mutta ottaa erotuksen
 * - operator*(float), overloaded operator jolla palautetaan uusi Vector3F jonka kaikki x,y,z on skaalattu tekijällä
 * - operator=(Vector3F), overloaded operator jolla asetetaan tämän olion x,y,z argumentit toisen olion kanssa samoiksi
 */

/* EXTRA: tee ristitulofunktio cross http://wikipedia.org/wiki/Cross_Product#Computing_the_cross_product */

/* Tee funktio main jossa initialisoidaan kaksi Vector3F a,b instanssia ja annetaan niille käyttäjän valitsemat arvot (std::cin)
 * tulosta a,b x,y,z arvot
 * laske lasku ota_modulo (a+b)*(a.x*b.x+a.y*b.y+a.z*b.z) ja tulosta tuloksen x,y,z arvot
 * EXTRA ota a,b välinen ristitulo ja tulosta arvot
 *
 * esimerkki oikeasta toiminnasta:
 * Vector2F a(1,2,3), b(3,2,1);
 * Vector2F c = a + 2*b;
 * std::cout << c.x <<' '<< c.y <<' '<< c.z << '\n';
 * // tulostaisi:
 * // 7 6 5
 */
