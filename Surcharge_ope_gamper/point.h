#pragma once
#include <iostream>

using namespace std;

class point
{
	float x;
	float y;
public:
	point(float abs = 0, float ord = 0) { x = abs; y = ord; } // Constructeur
	point(const point &Source);	//	Constructeur par copie

	point operator+(point)const;
	point operator++();
	point operator++(int n);
	point operator-(point)const;
	point operator+=(point);
	point operator-=(point);
	point operator*=(point);
	point operator/=(point);
	bool operator==(point);
	bool operator!=(point);
	friend ostream& operator<<(ostream& os, const point& mp); // surcharge cout
	friend istream& operator >> (istream& is, point& mp); // surcharge cin

	void affiche()const
	{
		cout << "Coordonnees : " << x << " " << y << "\n";
	}

	~point();
};


