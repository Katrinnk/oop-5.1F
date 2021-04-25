#include "RealStep.h"
#include "Number.h"
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

RealStep::RealStep()
{
	setStepin1(y1);
	setStepin2(y2);
}
RealStep::RealStep(double stepin1, double stepin2)
{
	y1 = stepin1;
	y2 = stepin2;
}
istream& operator >>(istream& in, RealStep& p)
{
	cout << "vvedit stepin do yakoho treba pidnesty pershe chyslo:"; in >> p.y1;
	cout << "vvedit stepin do yakoho treba pidnesty druhe chyslo:"; in >> p.y2;
	if (p.y1 == 0)
		throw "pry pidnesenny do sttepennia otrymaemo 1";
	if (p.y2 == 0)
		throw BadException("pry piddenesenni do stepennia otrymaemo 1");
	return in;
}
ostream& operator <<(ostream& out, const RealStep& p)
{
	out << string(p) << endl;
	return out;
}
RealStep::operator string() const
{
	stringstream sout;
	sout << "stepin dlia pershoho chysla: " << y1 << endl;
	sout << "stepin dlia druhoho chysla: " << y2 << endl;
	return sout.str();
}
void RealStep::Step1()
{
	cout << "rezultat pidnesennia do stepenia pershoho chysla: " << pow(x1, y1) << endl;
}
void RealStep::Step2()
{
	cout << "rezultat pidnesennia do stepenia druhoho chysla: " << pow(x2, y2) << endl;
}
