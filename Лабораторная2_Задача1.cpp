#include <iostream>
#include <math.h>
#include"Header.h"
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
			double res=1;
			double aer = 1;
			double rer = 1;
			pogr(a,s, res, aer, rer);
			if (rer != -1) {
				cout <<"res="<<res<<endl<< "absolute error= " << aer << endl << "reative error= " << rer;
			}
			else
				cout << "res=" << res << endl << "absolute error= " << aer << endl << "reative error cannot be calculated ";

		}
	}
	return 0;
}
