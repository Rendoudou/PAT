/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
#include<map>
using namespace std;

//找最大公因数
int gcd(int a, int b)
{
	if (b == 0) return a;
	else
		return gcd(b, a%b);
}

int main()
{

	double n1 = 0, m1 = 0, n2 = 0, m2 = 0;
	double fen_mu = 0;
	scanf("%lf/%lf", &n1, &m1);
	scanf("%lf/%lf", &n2, &m2);
	scanf("%lf", &fen_mu);

	double limit_1 = n1 / m1;
	double limit_2 = n2 / m2;
	double max = 0, min = 0;

	max = limit_1 > limit_2 ? limit_1 : limit_2;
	min = limit_1 < limit_2 ? limit_1 : limit_2;

	double temp = 0;
	vector<int> fen_zi_buffer;
	for (int i = 0; ; i++)
	{
		temp = i / fen_mu;
		if(temp >= max) break;
		if (temp > min) 
		{
			if (gcd(int(fen_mu), i) == 1)
				fen_zi_buffer.push_back(i);
			else
				continue;
		}
		else
			continue;
	}
	
	auto it_v = fen_zi_buffer.begin();
	bool flag = true;
	for (; it_v != fen_zi_buffer.end(); it_v++)
	{
		if (flag) 
		{
			printf("%d/%d", *it_v, int(fen_mu));
			flag = false;
		}
		else
			printf(" %d/%d", *it_v, int(fen_mu));
		
	}

	return 0;
}*/

/*
double 与 long double 在输入输出的语法上存在区别。
同时两者在比大小的问题上也因为存在精度差别，容易出现一定程度上的误差。
高精度与低精度之间的比大小需要慎之又慎。
*/