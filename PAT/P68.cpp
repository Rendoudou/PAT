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

struct SpecialPixel
{
	int x = 0;
	int y = 0;
	int value = 0;
};

struct NumberCount
{
	int count = 0;
};
//特殊数字不能是重复的数字
int main()
{
	int pic_size_m = 0, pic_size_n = 0, TOL = 0;

	//读取图像信息及其要求
	cin >> pic_size_m >> pic_size_n >> TOL;

	//读取图像
	vector< vector<int> > pic_m_n_buffer;
	vector<int> line;
	int pix_value = 0;
	map<int, NumberCount> number_in;
	for (int i = 0; i < pic_size_n; i++)
	{
		for (int j = 0; j < pic_size_m; j++)
		{
			scanf("%d", &pix_value);
			number_in[pix_value].count += 1;
			line.push_back(pix_value);
		}
		pic_m_n_buffer.push_back(line);
		line.clear();
	}

	//筛选
	vector<SpecialPixel> special_pixel_buffer;
	SpecialPixel temp_special;
	for (int i = 0; i < pic_size_n; i++)
	{
		for (int j = 0; j < pic_size_m; j++)
		{
			pix_value = pic_m_n_buffer[i][j];
			if (number_in[pix_value].count == 1)
			{
				if (j - 1 >= 0)
					if (abs(pix_value - pic_m_n_buffer[i][j - 1]) <= TOL)
						continue;

				if (j + 1 < pic_size_m)
					if (abs(pix_value - pic_m_n_buffer[i][j + 1]) <= TOL)
						continue;

				if (i - 1 >= 0)
					if (abs(pix_value - pic_m_n_buffer[i - 1][j]) <= TOL)
						continue;

				if (i + 1 < pic_size_n)
					if (abs(pix_value - pic_m_n_buffer[i + 1][j]) <= TOL)
						continue;

				if (i - 1 >= 0 && j - 1 >= 0)
					if (abs(pix_value - pic_m_n_buffer[i - 1][j - 1]) <= TOL)
						continue;

				if (i - 1 >= 0 && j + 1 < pic_size_m)
					if (abs(pix_value - pic_m_n_buffer[i - 1][j + 1]) <= TOL)
						continue;

				if (i + 1 < pic_size_n && j - 1 >= 0)
					if (abs(pix_value - pic_m_n_buffer[i + 1][j - 1]) <= TOL)
						continue;

				if (i + 1 < pic_size_n && j + 1 < pic_size_m)
					if (abs(pix_value - pic_m_n_buffer[i + 1][j + 1]) <= TOL)
						continue;

				temp_special.x = i + 1; // 行
				temp_special.y = j + 1; // 列
				temp_special.value = pix_value;
				special_pixel_buffer.push_back(temp_special); //存入一个特别点

				if (special_pixel_buffer.size() > 1)
					break;
			}
			else
				continue;
		}
		if (special_pixel_buffer.size() > 1)
			break;
	}

	if (special_pixel_buffer.size() == 1)
	{
		cout << "(" << special_pixel_buffer[0].y << ", " << special_pixel_buffer[0].x << "): " 
			<< special_pixel_buffer[0].value << endl;
	}
	else if (special_pixel_buffer.size() == 2)
	{
		cout << "Not Unique" << endl;
	}
	else if(special_pixel_buffer.size() == 0)
	{
		cout << "Not Exist" << endl;
	}

	return 0;
}*/

/*
if ((pix_value - pic_m_n_buffer[i][j - 1]) > TOL &&
	(pix_value - pic_m_n_buffer[i][j + 1]) > TOL &&
	(pix_value - pic_m_n_buffer[i - 1][j]) > TOL &&
	(pix_value - pic_m_n_buffer[i + 1][j]) > TOL &&
	(pix_value - pic_m_n_buffer[i - 1][j - 1]) > TOL &&
	(pix_value - pic_m_n_buffer[i - 1][j + 1]) > TOL &&
	(pix_value - pic_m_n_buffer[i + 1][j - 1]) > TOL &&
	(pix_value - pic_m_n_buffer[i + 1][j + 1]) > TOL
	)
{
	temp_special.x = i + 1; // 行
	temp_special.y = j + 1; // 列
	temp_special.value = pix_value;
	special_pixel_buffer.push_back(temp_special); //存入一个特别点
}
*/