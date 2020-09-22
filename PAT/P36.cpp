/*#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	int n = 0; char a = '\0';
	int real_line = 0;
    cin >> n >> a;
	if (n % 2 == 0)
		real_line = n / 2;
	else
		real_line = n / 2 + 1;
	for (int i = 0; i < real_line; i++)
	{
		if (i == 0 || i == real_line - 1) //第一行和最后一行
		{
			for (int j = 0; j < n; j++)
				printf("%c", a);
		}
		else								//其他行
		{
			for (int j = 0; j < n; j++)
			{
				if (j == 0 || j == n - 1)
					printf("%c", a);
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}*/