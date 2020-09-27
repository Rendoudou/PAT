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

	int n = 0;
	cin >> n;
	double temp = 0.0f;
	double sum = 0.0f;
	vector< string > buffer;
	string str_temp;
	while (n--)
	{
		cin >> str_temp;
		buffer.push_back(str_temp);
	}

	bool flag = true;
	int count_point = 0;
	int count_number = 0;
	for (int i = 0; i < buffer.size(); i++)
	{
		flag = true;
		count_point = 0;
		for (int j = 0; j < buffer[i].length(); j++)
		{
			if ((buffer[i][j] >= 'a' && buffer[i][j] <= 'z') || (buffer[i][j] >= 'A' && buffer[i][j] <= 'Z'))
			{
				flag = false;
				break;
			}
			else if (buffer[i][j] == '-' && j != 0)
			{
				flag = false;
				break;
			}
			else if (buffer[i][j] == '.')
			{
				if (j == 0) //|| j == buffer[i].length() - 1
				{
					flag = false;
					break;
				}
				count_point++;
				if (count_point == 2)
				{
					flag = false;
					break;
				}
			}
		}

		if (flag && count_point == 1)
		{
			for (int k = buffer[i].length() - 1; k >= 0; k--)
			{
				if (buffer[i][k] == '.')
				{
					if ((buffer[i].length() - 1 - k) > 2)
						flag = false;
					break;
				}
			}
		}
		if (buffer[i].length() == 1 && buffer[i][0] == '-')
			flag = false;

		if (flag)
		{
			istringstream is = istringstream(buffer[i]);
			is >> temp;
			if (temp < -1000.00 || temp > 1000.00)
				cout << "ERROR: " << buffer[i] << " is not a legal number" << endl;
			else
			{
				count_number++;
				sum += temp;
			}	
		}
		else
			cout << "ERROR: " << buffer[i] << " is not a legal number" << endl;
	}
	if (count_number)
	{
		sum = sum / count_number;
		if (sum > -0.05 && sum < 0.05)
			sum = 0;
		if (count_number == 1)
			cout << "The average of " << setiosflags(ios::fixed) << setprecision(2) << count_number << " number is " << sum << endl;
		else
			cout << "The average of " << setiosflags(ios::fixed) << setprecision(2) << count_number << " numbers is " << sum << endl;
	}
	else
		cout << "The average of " << count_number << " numbers is " << "Undefined" << endl;
	return 0;
}*/