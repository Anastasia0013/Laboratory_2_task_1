
#include <cmath>
#include <iostream>
using namespace std;
double sum(double esp, double a)
{
	double s = 1;
	double r = -1;
	int n = 1;
	while (abs(r) > esp) {
		r *= (0.5 - n) / (n + 1);
		s += r*a;
		n++;
	}
	return (s);
}
double sum( float esp, float a)
{
	double s = 1;
	double r = -1;
	int n = 1;
	while (abs(r)> esp) {
		r =r*(0.5 - n)/ (n + 1);
		s += r*a;
		n++;
	}
	return (s);
}
double sum(long double esp,long double a)
{
	double s = 1;
	double r = -1;
	int n = 1;
	while (abs(r) > esp) {
		r *= (0.5 - n) / (n + 1);
		s += r*a;
		n++;
	}
	return (s);
}
