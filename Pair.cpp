//Pair.cpp
#include "Pair.h"

void Pair::SetFirst(double value) { first = value; }
void Pair::SetSecond(double value) { second = value; }

double Pair::GetFirst() const { return first; }
double Pair::GetSecond() const { return second; }

Pair::Pair() : Object() { first = 0, second = 0; }
Pair::Pair(double first = 0, double second = 0) : Object()
{
	this->first = first;
	this->second = second;
}
Pair::Pair(const Pair& A) : Object()
{
	first = A.GetFirst();
	second = A.GetSecond();
}

bool operator > (const Pair p1, const Pair p2)
{
	if (p1.GetFirst() > p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() > p2.GetSecond()))
		return 1;
	else
		return 0;
}
bool operator < (const Pair p1, const Pair p2)
{
	if (p1.GetFirst() < p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() < p2.GetSecond()))
		return 1;
	else
		return 0;
}
bool operator == (const Pair p1, const Pair p2)
{
	if ((p1.GetFirst() == p2.GetFirst()) &&
		(p1.GetSecond() == p2.GetSecond()))
		return 1;
	else
		return 0;
}