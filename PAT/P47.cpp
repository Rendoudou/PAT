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

struct group_score {
	int group;
	int score;
};

struct progarm_player {
	int group;
	int id;
	int score;
};

vector<group_score> group_buffer(1001);

bool sort_greater(const group_score& a, const group_score& b) {
	return a.score > b.score;
}

int main() {

	int n = 0;
	cin >> n;
	progarm_player temp_player;

	for (unsigned int i = 0; i < group_buffer.size(); i++) {
		group_buffer[i].group = i;
		group_buffer[i].score = 0;
	}

	while (n--) {
		scanf("%d-%d", &temp_player.group, &temp_player.id);
		cin >> temp_player.score;
		group_buffer[temp_player.group].score +=  temp_player.score;
	}

	sort(group_buffer.begin(), group_buffer.end(), sort_greater);

	cout << group_buffer[0].group << " " << group_buffer[0].score;

	return 0;
}*/