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

int main(int argc, char* argv[])
{
	vector<int> num_buf_int_vec;
	int temp_int;
	int m = 0;
	cin >> m;
	for (size_t i = 0; i < m; i++)
	{
		cin >> temp_int;
		num_buf_int_vec.push_back(temp_int);
	}

	long pow2_k = 0;
	long pow2_k_last = 0;
	int n = 1;
	for (int i = 0; i < num_buf_int_vec.size(); i++)
	{
		for (n = 1; n < 10; n++)
		{
			pow2_k = pow(num_buf_int_vec[i], 2) * n;
			if (num_buf_int_vec[i] < 10)//ֻ��һλ
				pow2_k_last = pow2_k % 10;//ȡ��һλ
			else if (num_buf_int_vec[i] < 100)
				pow2_k_last = pow2_k % 100;//ȡ������λ
			else if(num_buf_int_vec[i] < 1000)
				pow2_k_last = pow2_k % 1000;//ȡ������λ
			else if(num_buf_int_vec[i] == 1000)
				pow2_k_last = pow2_k % 10000;//ȡ������λ

			if (num_buf_int_vec[i] == pow2_k_last)//���
			{
				cout << n << " " << pow2_k << endl;
				break;
			}
		}
		if (n == 10)
			cout << "No" << endl;
	}
	return 0;
}*/
