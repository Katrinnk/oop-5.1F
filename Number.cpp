#include "Number.h"
#include <iostream>

using namespace std;
Number::Number()
{
	x1 = 2;
	x2 = 4;
}
Number::Number(float dodanok1, float dodanok2)
{
	x1 = dodanok1;
	x2 = dodanok2;
}
istream& operator >>(istream& in, Number& n)
{
	cout << "vvedit pershyi dodanok:"; in >> n.x1;
	cout << "vvedit druhyi dodanok:"; in >> n.x2;
	if (n.x1 == 0)
		throw bad_exception();
	if (n.x2 == 0)
		throw invalid_argument("Error! - dilennia na 0");
	return in;
}
ostream& operator <<(ostream& out, const Number& n)
{
	out << string(n) << endl;
	return out;
}
Number::operator string() const
{
	stringstream sout;
	sout << "pershyi dodanok: " << x1 << endl;
	sout << "druhyi dodanok: " << x2 << endl;
	return sout.str();
}
void Number::Sum()
{
	cout << "suma dvokh dodankiv: " << x1 + x2 << endl;
}
void Number::Div_x1_x2()
{
	cout << "dilennia pershoho na druhyi: " << x1 / x2 << endl;
}
void Number::Div_x2_x1()
{
	cout << "dilennia druhoho na pershyi: " << x2 / x1 << endl;
}
