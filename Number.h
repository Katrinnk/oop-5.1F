#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "BadExeption.h"
using namespace std;
class Number
{
public:
	float x1, x2;
public:
	float getDodanok1() const { return x1; }
	float getDodanok2() const { return x2; }

	void setDodanok1(float value) { x1 = value; }
	void setDodanok2(float value) { x2 = value; }

	Number();
	Number(float, float);
	operator string() const;

	friend ostream& operator << (ostream&, const Number&);
	friend istream& operator >> (istream&, Number&) throw (bad_exception, invalid_argument);

	void Div_x1_x2();
	void Div_x2_x1();
	void Sum();
};