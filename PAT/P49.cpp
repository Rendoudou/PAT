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

int main(){
	long long n = 0;
	cin >> n;
	long long size = n;
	long double sum = 0.0f, temp = 0.0f;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		//sum += (size - i) * (i + 1) * temp;
		sum += size * (n + 1 - size) * temp;
		size--;
	}

	printf("%.2llf", sum);
	return 0;
}*/