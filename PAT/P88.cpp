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

	int m = 0, x = 0, y = 0;
	cin >> m >> x >> y;
	int jia = 0, yi = 0;
	double bing = 0;
	for (int i = 99; i >= 9; i--)
	{
		jia = i;
		yi = (jia % 10) * 10 + jia / 10;
		bing = abs(jia - yi) / double(x);
		if (bing == (yi / double(y)))
			break;
	}
	if (jia > 9)
	{
		cout << jia;
		if (jia != m)
			printf(" %s", jia > m ? "Cong" : "Gai");
		else
			printf(" Ping");
		if (yi != m)
			printf(" %s", yi > m ? "Cong" : "Gai");
		else
			printf(" Ping");
		if (bing != m)
			printf(" %s", bing > m ? "Cong" : "Gai");
		else
			printf(" Ping");
	}
	else
	{
		cout << "No Solution" << endl;
	}

	return 0;
}*/
