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

struct ScoreStuCount
{
	string school_name;
	double score = 0.0f;
	int score_integer = 0;
	int stu_count = 0;
};

typedef pair<string, ScoreStuCount> map_pair;

bool cmp(const map_pair& a, const map_pair& b)
{
	if (a.second.score_integer != b.second.score_integer)
		return a.second.score_integer > b.second.score_integer;
	else if (a.second.stu_count != b.second.stu_count)
		return a.second.stu_count < b.second.stu_count;
	else
		return a.second.school_name < b.second.school_name;
}

bool lower_str(string& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] = char('a' + (a[i] - 'A'));
	}
	return true;
}

int main()
{

	int n = 0;
	cin >> n;
	map<string, ScoreStuCount> school_info;
	string test_id;
	int score = 0;
	string school;
	for (int i = 0; i < n; i++)
	{
		cin >> test_id >> score >> school;
		//std::transform(school.begin(), school.end(), school.begin(), tolower);
		lower_str(school);
		if (test_id[0] == 'T')
			school_info[school].score += score * 1.5;
		else if (test_id[0] == 'A')
			school_info[school].score += score * 1.0;
		else if (test_id[0] == 'B')
			school_info[school].score += score / 1.5;

		school_info[school].school_name = school;
		school_info[school].stu_count++;
	}

	vector<map_pair> school_info_vec(school_info.begin(), school_info.end());
	for (int i = 0; i < school_info_vec.size(); i++)
		school_info_vec[i].second.score_integer = int(school_info_vec[i].second.score);

	sort(school_info_vec.begin(), school_info_vec.end(), cmp);

	int pai_ming = 1;
	cout << school_info_vec.size() << endl;
	for (int i = 0; i < school_info_vec.size(); i++)
	{
		if (i == 0)
			cout << pai_ming << " " + school_info_vec[i].second.school_name + " " << school_info_vec[i].second.score_integer <<
			" " << school_info_vec[i].second.stu_count << endl;
		else if (int(school_info_vec[i].second.score) != int(school_info_vec[i - 1].second.score))
		{
			pai_ming = i + 1;
			cout << pai_ming << " " + school_info_vec[i].second.school_name + " " << school_info_vec[i].second.score_integer <<
				" " << school_info_vec[i].second.stu_count << endl;
		}
		else
			cout << pai_ming << " " + school_info_vec[i].second.school_name + " " << school_info_vec[i].second.score_integer <<
			" " << school_info_vec[i].second.stu_count << endl;
	}

	return 0;
}
*/