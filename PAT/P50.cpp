/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

bool sort_greater(const int& a, const int& b) {
	return a > b;
}

enum DIR {
	Right = 0,
	Down,
	Left,
	Up
};

void get_pro_column_line(int & m, int & n, const int& number_n)
{
	int temp_m = 0, temp_n = 0;
	bool flag = true;
	for (int i = 1; i <= number_n; i++)
	{
		if (number_n % i == 0)
		{
			if (flag)
			{
				temp_m = (number_n / i) > i ? (number_n / i) : i;
				temp_n = (number_n / i) < i ? (number_n / i) : i;
				flag = false;
				continue;
			}
			else if(abs (number_n / i - i) < abs(temp_n - temp_m))
			{
				temp_m = (number_n / i) > i ? (number_n / i) : i;
				temp_n = (number_n / i) < i ? (number_n / i) : i;
			}
		}
	}
	m = temp_m;
	n = temp_n;
	return;
}

int main() 
{
	int n = 0, temp = 0, column = 0, line = 0;
	vector<int> buffer;
	cin >> n;

	while (n--)
	{
		scanf("%d", &temp);
		buffer.push_back(temp);
	}
	sort(buffer.begin(), buffer.end(), sort_greater);

	DIR dir_now = Right;
	int buffer_size = buffer.size();
	get_pro_column_line(line, column, buffer_size);

	int buffer_out[10000][100] = {0}; // 这个数组大小是一个坑
	int x_pos = 0, y_pos = 0;
	for (int i = 0; i < buffer_size; i++)
	{
		switch (dir_now)
		{
		case Right:
			buffer_out[y_pos][x_pos] = buffer[i];
			if (x_pos == column - 1 || buffer_out[y_pos][x_pos + 1] != 0) //到达最后一列
			{
				dir_now = Down; // 向下走
				y_pos++;
			}
			else
				x_pos++;
			break;
		case Down:
			buffer_out[y_pos][x_pos] = buffer[i];
			if (y_pos == line - 1 || buffer_out[y_pos + 1][x_pos] != 0)
			{
				dir_now = Left;
				x_pos--;
			}
			else
				y_pos++;
			break;
		case Left:
			buffer_out[y_pos][x_pos] = buffer[i];
			if (x_pos == 0 || buffer_out[y_pos][x_pos - 1] != 0)
			{
				dir_now = Up;
				y_pos--;
			}
			else
				x_pos--;
			break;
		case Up:
			buffer_out[y_pos][x_pos] = buffer[i];
			if (y_pos == 0 || buffer_out[y_pos - 1][x_pos] != 0)
			{
				dir_now = Right;
				x_pos++;
			}
			else
				y_pos--;
			break;
		default:
			break;
		}
	}
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if(j == 0)
				printf("%d", buffer_out[i][j]);
			else
				printf(" %d", buffer_out[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/