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

int main()
{
	int pic_size_n = 0, pic_size_m = 0;
	int range_min = 0, range_max = 0;
	int replex = 0;

	cin >> pic_size_m >> pic_size_n >> range_min >> range_max >> replex;
	vector< vector<int> > pic_m_n_buffer;
	vector<int> line;
	int temp_pix = 0;
	for (int i = 0; i < pic_size_m; i++)
	{
		for (int j = 0; j < pic_size_n; j++)
		{
			scanf("%d", &temp_pix);
			if (temp_pix >= range_min && temp_pix <= range_max)
				temp_pix = replex;
			line.push_back(temp_pix);
		}
		pic_m_n_buffer.push_back(line);
		line.clear();
	}

	bool flag = true;
	for (int i = 0; i < pic_size_m; i++)
	{
		flag = true;
		for (int j = 0; j < pic_size_n; j++)
		{
			if (flag)
			{
				printf("%03d", pic_m_n_buffer[i][j]);
				flag = false;
			}
			else
				printf(" %03d", pic_m_n_buffer[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/
