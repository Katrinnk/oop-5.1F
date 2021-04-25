#pragma once
#include "Number.h"
#include <iostream>
#include <string>
#include <sstream>
#include "BadExeption.h"
using namespace std;

class RealStep :public Number
{
public:
	double y1, y2;
public:
	double getStepin1() const { return y1; }
	double getStepin2() const { return y2; }

	void setStepin1(double value) { y1 = value; }
	void setStepin2(double value) { y2 = value; }

	RealStep();
	RealStep(double, double);
	operator string() const;

	friend ostream& operator << (ostream&, const RealStep&);
	friend istream& operator >> (istream&, RealStep&) throw (BadException, const char*);

	void Step1();
	void Step2();
};
