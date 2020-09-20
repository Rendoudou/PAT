//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//#include <math.h>
//#include <sstream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	int n = 0; char fu;
//	cin >> n >> fu;
//
//	//if (n == 1)
//	//{
//	//	printf("%c\n", fu);
//	//	printf("0");
//	//	return 0;
//	//}
//	//	
//
//	//get max;
//	int jie = 0, max = 0, count = 0;
//	int re = 0;
//	while (true)
//	{
//		if (max == 0)
//			count += 1;
//		else
//			count += jie * 2;
//
//		if (count > n) 
//		{
//			re = n - (count - jie * 2);
//			break;
//		}
//		max++;
//		jie = max * 2 + 1;	
//	}
//
//	max = max - 1;
//	//display
//	for (int i = max; i >= 0; i--)
//	{
//		for (int k = 0; k < max - i; k++)
//			printf(" ");
//		for (int j = 0; j < i * 2 + 1; j++)
//			printf("%c", fu);
//		printf("\n");
//	}
//
//	for (int i = 1; i <= max; i++)
//	{
//		for (int k = 0; k < max - i; k++)
//			printf(" ");
//		for (int j = 0; j < i * 2 + 1; j++)
//			printf("%c", fu);
//		printf("\n");
//	}
//	printf("%d", re);
//	return 0;
//}