//Sourse.cpp
#include <iostream>
#include "Rational.h"

int main()
{
    cout << "Number of objects of class Rational: " << Object::Count() << endl;
    Rational a;
    cout << "Number of objects of class Rational: " << Object::Count() << endl;
    Rational b;
    cout << "Number of objects of class Rational: " << Object::Count() << endl;
    Rational c;
    cout << "Number of objects of class Rational: " << Object::Count() << endl;
    int result;
    cout << "________________________________________" << endl;
    cout << "\nPair A" << endl;
    cin >> a;
    cout << "________________________" << endl;

    cout << "\nPair B" << endl;
    cin >> b;
    cout << "________________________" << endl;

    cout << "\nPair C" << endl;
    cin >> c;
    cout << "________________________" << endl;

    cout << "\na and b" << endl;
    result = a.ComparePairs(a, b);
    a.ComparePairsResult(result);
    cout << "________________________" << endl;
    cout << "\na and c" << endl;
    result = a.ComparePairs(a, c);
    a.ComparePairsResult(result);
    cout << "________________________" << endl;
    cout << "\nb and c" << endl;
    result = a.ComparePairs(b, c);
    a.ComparePairsResult(result);
    cout << "________________________" << endl;
    cout << "a++" << endl;
    cout << a++ << endl;

    cout << "a--" << endl;
    cout << a-- << endl;

    cout << "++a" << endl;
    cout << ++a << endl;

    cout << "--a" << endl;
    cout << --a << endl;

    cout << "Size of class is equal to " << sizeof(Rational) << endl;

    return 0;
}