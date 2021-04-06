//Rational.h
#pragma once
#include "Pair.h"

class Rational : public Pair
{
public:
	Rational();
	Rational(double, double);
	Rational(Rational&);

	Rational& operator = (const Rational&);
	friend ostream& operator << (ostream&, const Rational&);
	friend istream& operator >> (istream&, Rational&);
	operator string() const;

	int ComparePairs(const Pair p1, const Pair p2) const;
	void ComparePairsResult(int result);

	Rational& operator ++ ();
	Rational& operator -- ();
	Rational operator ++ (int);
	Rational operator -- (int);
};
