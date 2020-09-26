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

vector<string> first_check;

int main()
{

	string buffer_in;
	getline(cin, buffer_in);
	int tou = 0, wei = 0, length = buffer_in.size();

	bool flag_tou = true, out_flag = false;
	int count_zero = 0;

	for (int i = 0; i < length; i++)//³¤¶È´óÓÚ1
	{
		if (flag_tou && buffer_in[i] == '1') //è¿˜æ²¡å‡ºçŽ°å¤´ æ­¤æ—¶å‡ºçŽ°äº†â€˜1â€™å¤´
		{
			tou = wei = i;
			flag_tou = false;
		}
<<<<<<< HEAD
		if (flag_tou == false)  //¿ªÊ¼ÕÒÎ²²¿
=======
		if (flag_tou == false)  //å¼€å§‹æ‰¾å°¾éƒ¨
>>>>>>> 0c690052b68ea1fd250a527c48c19c8f56db0739
		{
			if (buffer_in[i] == '1')
			{
				wei = i;
			}
			if (buffer_in[i] == '0')
			{
				count_zero++;
				if (count_zero == 2)
				{
					out_flag = true;
				}
			}
		}
<<<<<<< HEAD
		if (out_flag || (i == length - 1 && flag_tou == false )) //ÕÒµ½Í·Î²µ«ÊÇ »¹Ã»´ïµ½ÈÌÊÜ·¶Î§¾Íµ½Î²ÁË¡£
=======
		if (out_flag || (i == length - 1 && flag_tou == false))
>>>>>>> 0c690052b68ea1fd250a527c48c19c8f56db0739
		{
			first_check.push_back(buffer_in.substr(tou, wei - tou + 1));
			out_flag = false;
			flag_tou = true;
			count_zero = 0;
		}
	}

<<<<<<< HEAD
	std::cout << "½á¹û" << endl;
	std::cout << "½á¹ûÊýÁ¿" << first_check.size() << endl;
=======
	cout << "result" << endl;
	cout << "result counts : " <<first_check.size() << endl;
>>>>>>> 0c690052b68ea1fd250a527c48c19c8f56db0739

	for (unsigned int i = 0; i < first_check.size(); i++)
	{
		std::cout << first_check[i] << endl;
	}

	return 0;
<<<<<<< HEAD
}*/
=======
}
>>>>>>> 0c690052b68ea1fd250a527c48c19c8f56db0739
