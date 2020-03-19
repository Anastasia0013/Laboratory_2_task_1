#include <iostream>
#include <math.h>
#include "series.h"
using namespace std;
int main()
{
	float esp;
	float a;
	double s;
	cin >> a;
	cin >> esp;
	if (a < (-1))
		cout << "Error X<-1";
	else {
		if (esp <= 0)
			cout << "Error esp";
		else {
			s = sum(esp, a);
			cout << "s= " << s << endl;
			double res;
			res = pow((a + 1), 0.5);
			cout << "res=" << res << endl;
			double aer = abs(res - s);
			if (res != 0) {
				double rer = aer / res;
				cout << "absolute error= " << aer << endl << "reative error= " << rer;
			}
			else
				cout << "absolute error= " << aer << endl << "reative error cannot be calculated ";

		}
	}
	return 0;
}
