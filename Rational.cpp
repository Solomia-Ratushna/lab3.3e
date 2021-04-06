//Rational.cpp
#include "Rational.h"
Rational::Rational() : Pair(0, 0) {}
Rational::Rational(double first = 0, double second = 0) : Pair(first, second) {}
Rational::Rational(Rational& A) : Pair(A.GetFirst(), A.GetSecond()) {}

Rational& Rational::operator = (const Rational& A)
{
	this->SetFirst(A.GetFirst());
	this->SetSecond(A.GetSecond());

	return *this;
}
ostream& operator << (ostream& out, const Rational& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Rational& A)
{
	double first, second;
	cout << "Enter a first number : "; in >> first;
	cout << "Enter a second number r: "; in >> second;
	A.SetFirst(first); A.SetSecond(second);
	return in;
}
Rational::operator string() const
{
	stringstream ss;
	ss << "First number of pair is " << this->GetFirst() << endl;
	ss << "Second number of pair is  " << this->GetSecond() << endl;
	return ss.str();
}

int Rational::ComparePairs(const Pair p1, const Pair p2) const
{
	if (p1 > p2)
		return 1;
	if (p1 < p2)
		return 2;
	if (p1 == p2)
		return 3;
}
void Rational::ComparePairsResult(int result)
{
	switch (result)
	{
	case 1:
		cout << "\nP1 > P2" << endl;
		break;
	case 2:
		cout << "\nP1 < P2" << endl;
		break;
	case 3:
		cout << "\nP1 = P2" << endl;
		break;
	}
}

Rational& Rational::operator ++ ()
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}
Rational& Rational::operator -- ()
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}
Rational Rational::operator ++ (int)
{
	Rational t(*this);
	this->SetSecond(this->GetSecond() + 1);
	return t;
}
Rational Rational::operator -- (int)
{
	Rational t(*this);
	this->SetSecond(this->GetSecond() - 1);
	return t;
}