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

int main()
{
	string A_buffer, B_buffer, out_buffer;

	cin >> A_buffer >> B_buffer;
	
	bool ji_wei = true;
	int res_temp = 0;
	for (int i = A_buffer.size() - 1, j = B_buffer.size() - 1; i >= 0 && j >= 0; i--, j--) //B 长度大于 A ; B 长度小于 A; B 长度等于 A，从后往前
	{
		if (ji_wei) // 奇数位
		{
			res_temp = (int(A_buffer[i] - '0') + int(B_buffer[j] - '0')) % 13;
			if (res_temp == 10)
				out_buffer.push_back('J');
			else if(res_temp == 11)
				out_buffer.push_back('Q');
			else if (res_temp == 12)
				out_buffer.push_back('K');
			else
				out_buffer.push_back(char('0' + res_temp));
			ji_wei = false;
		}
		else
		{
			res_temp = B_buffer[j] - A_buffer[i];
			if (res_temp < 0)
				res_temp += 10;
			out_buffer.push_back(char('0' + res_temp));
			ji_wei = true;
		}
	}

	int A_length = A_buffer.length();//A的长度

	int B_length = B_buffer.length();//B的长度

	reverse(out_buffer.begin(), out_buffer.end());

	// B < A
	if (B_length < A_length)
		for (int i = 0; i < A_length - B_length; i++)
		{
			if (ji_wei)
			{
				res_temp = (int(A_buffer[i] - '0') + 0) % 13;
				if (res_temp == 10)
					printf("J");
				else if (res_temp == 11)
					printf("Q");
				else if (res_temp == 12)
					printf("K");
				else
					printf("%c", char('0' + res_temp));
				ji_wei = false;
			}
			else
			{
				res_temp = '0' - A_buffer[i];
				if (res_temp < 0)
					res_temp += 10;
				printf("%c",char('0' + res_temp));
				ji_wei = true;
			}
		}
	else
		for (int i = 0; i < B_length - A_length; i++)
		{
			if (ji_wei)
			{
				res_temp = (int(B_buffer[i] - '0') + 0) % 13;
				if (res_temp == 10)
					printf("J");
				else if (res_temp == 11)
					printf("Q");
				else if (res_temp == 12)
					printf("K");
				else
					printf("%c", char('0' + res_temp));
				ji_wei = false;
			}
			else
			{
				res_temp = B_buffer[i] - '0';
				if (res_temp < 0)
					res_temp += 10;
				printf("%c", char('0' + res_temp));
				ji_wei = true;
			}
		}
	//B >= A
	std::cout << out_buffer;

	return 0;
}*/