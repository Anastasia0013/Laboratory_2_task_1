#include<iostream>
#include "math.h"
void pogr(float a, double s, double &res, double &are, double &rer)
{
	res = sqrt(a+1);
	are = abs(s - res);
	if (are == 0) {
		rer = -1;
	}
	else
		rer = are / res;
}
void pogr(long double a, long double s, long double& res, long double& are, long double& rer)
{
	res = sqrt(a + 1);
	are = abs(s - res);
	if (are == 0) {
		rer = -1;
	}
	else
		rer = are / res;
}
void pogr(float a, float s, float& res, float& are, float& rer)
{
	res = sqrt(a + 1);
	are = abs(s - res);
	if (are == 0) {
		rer = -1;
	}
	else
		rer = are / res;
}
