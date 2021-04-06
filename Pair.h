//Pair.h
#pragma once
#include "Object.h"
#include <iostream>
#include <sstream>

using namespace std;

class Pair :public Object
{
private:
	double first, second;
public:
	void SetFirst(double value);
	void SetSecond(double value);

	double GetFirst() const;
	double GetSecond() const;

	Pair();
	Pair(double, double);
	Pair(const Pair&);

	friend bool operator > (const Pair p1, const Pair p2);
	friend bool operator < (const Pair p1, const Pair p2);
	friend bool operator == (const Pair p1, const Pair p2);
};


