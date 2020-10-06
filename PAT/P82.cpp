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

static int player_realitic_in_order = 0;

class Player
{
public:
	Player(int, int, int);
	double calc_dis(void);
	double get_dis(void) const {
		return this->dis;
	}
	int get_id(void) const {
		return this->id;
	}

	~Player() {
		//cout << "Player " + to_string(this->player_construct_squ) + " Deconstructed.\n";
	}

	Player(const Player&);

protected:
	
private:
	int id;
	int x;
	int y;
	int player_construct_squ;
	double dis;
};

Player::Player(int id, int x, int y)
{
	player_realitic_in_order++;
	this->id = id;
	this->x = x;
	this->y = y;	
	this->player_construct_squ = player_realitic_in_order;
	//cout << "Player " + to_string(this->player_construct_squ) + " Constructed.\n";
	return;
}

double Player::calc_dis(void)
{
	this->dis = sqrt(pow(x, 2) + pow(y, 2));
	return this->dis;
}

Player::Player(const Player& a)
{
	this->id = a.id;
	this->x = a.x;
	this->y = a.y;
	player_realitic_in_order++;
	this->player_construct_squ = player_realitic_in_order;
	//cout << "Player " + to_string(a.player_construct_squ) + " Copy To Player " + to_string(this->player_construct_squ) << ".\n";
}

bool cmp(const Player& a, const Player& b) {
	return a.get_dis() > b.get_dis();
}

int main()
{
	int id = 0, x = 0, y = 0, n = 0;
	vector<Player> player_buf;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		scanf("%d%d%d", &id, &x, &y);
		player_buf.push_back(Player(id,x,y));//构造加拷贝构造
	}
	for (size_t i = 0; i < n; i++)
		player_buf[i].calc_dis();

	sort(player_buf.begin(), player_buf.end(), cmp);

	printf("%04d %04d\n", player_buf.back().get_id(), player_buf[0].get_id());

	return 0;
}*/
