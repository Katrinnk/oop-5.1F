#include "Number.h"
#include "RealLog.h"
#include "RealStep.h"
#include "BadExeption.h"
#include <iostream>

using namespace std;
int main()
{
	Number k;
	bool result;
	do
	{
		try
		{
			result = true;
			cin >> k;
		}
		catch (invalid_argument e)
		{
			result = false;
			cerr << e.what() << endl;
		}
		catch (bad_exception& e)
		{
			result = false;
			cerr << e.what() << endl;
		}
	} while (!result);
	cout << k;
	k.Sum();
	k.Div_x1_x2();
	k.Div_x2_x1();
	cout << "nastupni dii vykonuuitsia dlia znachen: x1=2, x2=4 " << endl;
	RealStep l;
	bool result2;
	do
	{
		try
		{
			result = true;
			cin >> l;
		}
		catch (const char* str)
		{
			result = false;
			cerr << str << endl;
		}
		catch (BadException e)
		{
			cerr << e.what() << endl;
			result = false;
		}
	} while (!result);
	cout << l;
	l.Step1();
	l.Step2();
	RealLog h;
	h.Log1();
	h.Log2();
}