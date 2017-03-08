#include "point.h"

point::point(const point &Source)	//	constructeur par copie
{
	x = Source.x;
	y = Source.y;
}


point point::operator+(point a)const
// Additionne un point a avec un point b, stocke le résultat dans un point c
{
	point p;
	p.x = x + a.x;
	p.y = y + a.y;
	return p;
}


point point::operator-(point a)const
// Soustrais un point a avec un point b, stocke le résultat dans un point c
{
	point p;
	p.x = x - a.x;
	p.y = y - a.y;
	return p;
}

point point::operator+=(point a)
// Additionne un point a avec un point b, stocke le résultat dans le point a 
{
	x += a.x;
	y += a.y;
	return *this;
}

point point::operator-=(point a)
// Soustrais un point a avec un point b, stocke le résultat dans le point a 
{
	x -= a.x;
	y -= a.y;
	return *this;
}

point point::operator*=(point a)
// Multiplie un point a avec un point b, stocke le résultat dans le point a 
{
	x *= a.x;
	y *= a.y;
	return *this;
}

point point::operator/=(point a)
// Divise un point a avec un point b, stocke le résultat dans le point a 
{
	x /= a.x;
	y /= a.y;
	return *this;
}

bool point::operator==(point a)
// Verifie si deux points sont identiques
{
	if (x == a.x && y == a.y)
	{
		cout << "Les point sont identiques" << endl;
		return true;
	}
	else
	{
		cout << "Les points sont differents" << endl;
		return false;
	}
}

bool point::operator!=(point a)
// Verifie si deux points sont différents
{
	if (x != a.x && y != a.y)
	{
		cout << "Ces points sont differents" << endl;
		return true;
	} 
	else
	{
		cout << "Ces points sont identiques" << endl;
		return false;
	}
}

point point::operator++()
{
	x++;
	y++;
	return *this;
}

point point::operator++(int n)
{
	point p = *this;
	x++;
	y++;
	return p;
}

ostream& operator<<(ostream& os, const point& mp)
{
	os << mp.x << ' ' << mp.y << endl;
	return os;
}

/*istream& operator>>(istream& is, const point& mp)
{
	is >> mp.x >> mp.y;
	return is;
} */




point::~point()
{
}
