#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	char c = '\0';
	int buffer[6] = { 0 };
	while (scanf("%c", &c))
	{
		if (c == '\n') break;
		switch (c)
		{
		case ('P'): buffer[0]++; break;
		case ('A'): buffer[1]++; break;
		case ('T'): buffer[2]++; break;
		case ('e'): buffer[3]++; break;
		case ('s'): buffer[4]++; break;
		case ('t'): buffer[5]++; break;
		default:
			break;
		}
	}
	while (true)
	{
		if (buffer[0] == 0 && buffer[1] == 0 && buffer[2] == 0 && buffer[3] == 0 && buffer[4] == 0 && buffer[5] == 0)
			break;
		if (buffer[0]) {
			printf("P");
			buffer[0]--;
		}
		if (buffer[1]) {
			printf("A");
			buffer[1]--;
		}
		if (buffer[2]) {
			printf("T");
			buffer[2]--;
		}
		if (buffer[3]) {
			printf("e");
			buffer[3]--;
		}
		if (buffer[4]) {
			printf("s");
			buffer[4]--;
		}
		if (buffer[5]) {
			printf("t");
			buffer[5]--;
		}
	}
	printf("\n");
	return 0;
}