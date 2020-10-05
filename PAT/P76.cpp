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

	int n = 0;
	string password, temp;
	cin >> n;
	

	cin.get();
	while (n--)
	{
		getline(cin, temp);
		for (int i = 0; i < temp.size(); i++)
			if (temp[i] == 'T')
			{
				password.push_back(temp[i - 2]);
				break;
			}
	}

	for (unsigned int i = 0; i < password.size(); i++)
		printf("%d", password[i] - 'A' + 1);

	return 0;
}*/
