/*#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

// 1 galleon = 17 sickle; 1 sickle = 29 knut;
// 题目假设并保证是一个合理的输入
int main()
{
	long galleon_need = 0, sickle_need = 0, knut_need = 0;

	scanf("%ld.%ld.%ld", &galleon_need, &sickle_need, &knut_need);


	long galleon_pay = 0, sickle_pay = 0, knut_pay = 0;
	scanf("%ld.%ld.%ld", &galleon_pay, &sickle_pay, &knut_pay);

	long need = 0, pay = 0;

	need = galleon_need * 17 * 29 + sickle_need * 29 + knut_need;
	pay = galleon_pay * 17 * 29 + sickle_pay * 29 + knut_pay;

	long pay_back = need - pay;

	if (pay_back > 0)
		printf("-");

	printf("%ld", abs(pay_back) / (17 * 29));
	printf(".%ld", abs(pay_back) % (17 * 29) / 29);
	printf(".%ld", abs(pay_back) % 29);

	return 0;

}*/