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

struct student
{
	string id;
	int shi_ji;
	int kao_shi;
};

int main()
{
	int n = 0;
	student temp;
	vector<student> buffer;
	cin >> n;
	while (n--)
	{
		cin >> temp.id;
		cin >> temp.shi_ji;
		cin >> temp.kao_shi;
		buffer.push_back(temp);
	}

	vector<int> buffer_shi_ji;
	int m = 0;
	int temp_shi_ji = 0;
	cin >> m;
	while (m--)
	{
		cin >> temp_shi_ji;
		buffer_shi_ji.push_back(temp_shi_ji);
	}

	for (unsigned int i = 0; i < buffer_shi_ji.size(); i++)
	{
		temp_shi_ji = buffer_shi_ji[i];
		for (unsigned j = 0; j < buffer.size(); j++)
		{
			if (temp_shi_ji == buffer[j].shi_ji)
			{
				cout << buffer[j].id << " " << buffer[j].kao_shi << endl;
				break;
			}
		}
	}

	return 0;
}*/