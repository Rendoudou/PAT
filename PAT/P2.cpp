//#include <iostream>
//#include <string>
//using namespace std;
//
//static string number[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
//
//int main()
//{
//	string numberIn;
//	cin >> numberIn;
//	int count = 0;
//	
//	//累加每一个位
//	for (unsigned int i = 0; i < numberIn.length(); i++)
//		count += numberIn[i] - '0';
//	
//	//最多不超过第三位
//	int bai = 0;
//	int shi = 0;
//	int ge = 0;
//
//	if (count >= 100)
//	{
//		bai = count / 100;
//		shi = count % 100 / 10;
//		ge = count % 10;
//		cout << number[bai] << " " << number[shi] << " " << number[ge];
//	}
//	else if (count >= 10)
//	{
//		shi = count / 10;
//		ge = count % 10;
//		cout << number[shi] << " " << number[ge];
//	}
//	else
//	{
//		ge = count;
//		cout << number[ge];
//	}
//	return 0;
//}