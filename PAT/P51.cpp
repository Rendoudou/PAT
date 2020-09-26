#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	long double r1 = 0.0f, p1 = 0.0f, r2 = 0.0f, p2 = 0.0f;
	cin >> r1 >> p1 >> r2 >> p2;
	long double real1 = 0.0f, imag1 = 0.0f, real2 = 0.0f, imag2 = 0.0f;
	long double real = 0.0f, imag = 0.0f;
	real1 = r1 * cos(p1);
	imag1 = r1 * sin(p1);
	real2 =	r2 * cos(p2);
	imag2 = r2 * sin(p2);

	real = real1 * real2 - imag1 * imag2;
	imag = real1 * imag2 + imag1 * real2;

	if (real < 0.05 && real > -0.05)
		real = 0.00;
	printf("%.2llf", real);
	if (imag < 0.05 && imag > -0.05)
		imag = 0.00;
	if (imag >= 0)
		printf("+");
	printf("%.2llfi", imag);
	return 0;
}

//因为题目说明了实部和虚部均保留 2 位小数。绝对值小于0.005的负数其结果应该是0.00（四舍五入）。