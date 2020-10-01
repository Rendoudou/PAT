/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
#include<map>
using namespace std;

struct CharacterValue
{
	int real = 0;
	int imag = 0;
	double mold = 0.0f;
	void get_mod();
};

void CharacterValue::get_mod()
{
	this->mold = sqrt(pow(real, 2) + pow(imag, 2));
	return;
}

bool sort_greatter(const CharacterValue& a, const CharacterValue& b)
{
	return a.mold > b.mold;
}

int main()
{
	int n = 0;
	cin >> n;
	vector<CharacterValue> character_value_buffer(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &character_value_buffer[i].real, &character_value_buffer[i].imag);
		character_value_buffer[i].get_mod();
	}
	sort(character_value_buffer.begin(), character_value_buffer.end(), sort_greatter);
	printf("%.2f", character_value_buffer[0].mold);
	return 0;
}*/
