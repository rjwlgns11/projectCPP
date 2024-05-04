#include "basicarith.h"
double trianglearea(double base, double height)
{
	return div(mul(base, height), 2);
}
double circlearea(double rad)
{
	return mul(mul(rad, rad), pi);
}
