#include <stdlib.h>
#include"point.h"

int main()
{
	point a1(2, 5), a2(2, 5), a3(1, 1), a4(5, 3), b, c;
	point a5(a4);	// Cree a5 avec les mêmes valeurs que a4
	b = ++a1;
	c = ++a3;
	c = a1 - a3;
	cout << c;	// resultat : 1 4
	a1 += a3;
	cout << a1;	// resultat : 3 6
	a3 -= a1;
	cout << a3;	// resultat : -2 -5
	b *= a2;
	cout << b;	// resultat 6 30
	c /= a1;
	cout << c;  // resultat 0.2 0.5
	a4 == a5;		// points identiques
	a4 != b;		// points differents
	cout << "Le point est " << a5 << endl << flush;
//	cin >> a5;


	system("pause");
	return 0;
}