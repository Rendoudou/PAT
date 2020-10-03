/*#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
#include <map>
using namespace std;

struct Gamble
{
	int n1 = 0;
	int big_or_small = 0;
	int bottom_pour = 0;
	int n2 = 0;
};

int main()
{
	int money = 0, gamble_count = 0;
	cin >> money >> gamble_count;
	bool win_flag = true;
	int n1 = 0, n2 = 0, bottom_pour = 0, big_or_small = 0;
	Gamble temp;
	vector<Gamble> buf;
	for (int i = 0; i < gamble_count; i++)
	{
		scanf("%d%d%d%d", &temp.n1, &temp.big_or_small, &temp.bottom_pour, &temp.n2);
		buf.push_back(temp);
	}

	for(int i = 0; i < gamble_count; i++)
	{
		n1 = buf[i].n1;
		n2 = buf[i].n2;
		big_or_small = buf[i].big_or_small;
		bottom_pour = buf[i].bottom_pour;

		if (((n1 > n2) && big_or_small == 0) || ((n1 < n2) && big_or_small == 1))
			win_flag = true;
		else
			win_flag = false;
		if (bottom_pour <= money)
		{
			if (win_flag)
			{
				money += bottom_pour;
				printf("Win %d!  Total = %d.\n", bottom_pour, money);

			}
			else
			{
				money -= bottom_pour;
				printf("Lose %d.  Total = %d.\n", bottom_pour, money);
			}
		}
		else
		{
			printf("Not enough tokens.  Total = %d.\n", money);
		}
		if (money == 0)
		{
			printf("Game Over.\n");
			break;
		}
	}

	return 0;
}*/
