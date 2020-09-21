/* #pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

//计算 两个式子
long long a = 0, b = 0, c = 0, d = 0;
long long zhen_1 = 0, fen_zi_1 = 0, fen_mu_1 = 0;
long long zhen_2 = 0, fen_zi_2 = 0, fen_mu_2 = 0;

long long temp_zhen = 0, temp_fen_zi = 0, temp_fen_mu = 0;

bool res_flag = true; bool zero_flag = false;

bool flag_1_zero = false, flag_2_zero = false;

// check_max
long long check_max(const long long a, const long long b) //关键在于两个数字很大时，查找公因子的方法。剩余输出部分比较麻烦(细节)
{
	if (0 == b) return a;
	else return check_max(b, a % b);
}

// 第一个数字格式
void number_1()
{
	long long max = 0;
	if (flag_1_zero)
	{
		printf("0");
	}
	else
	{
		if (a < 0) // 正负
			printf("(-");

		if (zhen_1) //整数部分是否存在
		{
			if (fen_zi_1) 
			{
				max = check_max(fen_zi_1, fen_mu_1);
				printf("%lld %lld/%lld", zhen_1, fen_zi_1 / max, fen_mu_1 / max);
			}
			else
				printf("%lld", zhen_1);
		}
		else
		{
			max = check_max(fen_zi_1, fen_mu_1);
			printf("%lld/%lld", fen_zi_1 / max, fen_mu_1 / max);
		}
		if (a < 0)
			printf(")");
	}
	return;
}

// 第二个数字格式
void number_2()
{
	long long max = 0;
	if (flag_2_zero)
	{
		printf("0");
	}
	else
	{
		if (c < 0) // 正负
			printf("(-");

		if (zhen_2) //整数部分是否存在
		{
			if (fen_zi_2)
			{
				max = check_max(fen_zi_2, fen_mu_2);
				printf("%lld %lld/%lld", zhen_2, fen_zi_2 / max, fen_mu_2 / max);
			}
			else
				printf("%lld", zhen_2);
		}
		else
		{
			max = check_max(fen_zi_2, fen_mu_2);
			printf("%lld/%lld", fen_zi_2 / max, fen_mu_2 / max);
		}

		if (c < 0)
			printf(")");
	}
	return;
}

// 结果格式
void result()
{
	long long max = 0;
	if (temp_fen_zi == 0) zero_flag = true;
	if (temp_fen_zi < 0) res_flag = false;
	temp_zhen = abs(temp_fen_zi) / temp_fen_mu;
	temp_fen_zi = abs(temp_fen_zi) % temp_fen_mu;

	if (zero_flag)
		printf("0");
	else
	{
		if (res_flag == false)
			printf("(-");
		if (temp_zhen != 0)
		{
			if (temp_fen_zi) //分子不为 0
			{
				max = check_max(temp_fen_zi, temp_fen_mu);
				printf("%lld %lld/%lld", temp_zhen, temp_fen_zi / max, temp_fen_mu / max);
			}
			else
				printf("%lld", temp_zhen);
		}
		else
		{
			max = check_max(temp_fen_zi, temp_fen_mu);
			printf("%lld/%lld", temp_fen_zi / max, temp_fen_mu / max);
		}
		if (res_flag == false)
			printf(")");
	}
	zero_flag = false;
	res_flag = true;
	return;
}

//主函数
int main()
{
	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);

	if (a == 0)
		flag_1_zero = true;
	if (c == 0)
		flag_2_zero = true;


	// 求真分式全部取绝对值
	zhen_1 = abs( a / b);
	fen_zi_1 = abs(a) % abs(b);

	zhen_2 = abs(c / d);
	fen_zi_2 = abs(c) % abs(d);
	
	fen_mu_1 = b, fen_mu_2 = d;

	//计算


	//加 a/b + c/d
	number_1();
	printf(" + ");
	number_2();
	printf(" = ");

	temp_fen_mu = b * d;
	temp_fen_zi = a * d + b * c;
	result();

	printf("\n");

	//减
	number_1();
	printf(" - ");
	number_2();
	printf(" = ");

	temp_fen_zi = a * d - b * c;
	result();

	printf("\n");

	//乘
	number_1();
	printf(" * ");
	number_2();
	printf(" = ");

	temp_fen_zi = a * c;
	result();

	printf("\n");

	//除
	number_1();
	printf(" / ");
	number_2();
	printf(" = ");

	if (c == 0) printf("Inf");
	else
	{
		temp_fen_mu = b * abs(c);
		if (c < 0)
			temp_fen_zi = a * d * (-1);
		else
			temp_fen_zi = a * d;
		result();
	}	

	printf("\n");

	return 0;
} */