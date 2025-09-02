#pragma once
#include <string>
#include <vector>


class Player {
private:
	std::string name;
	int health;
	int defense;
	int attack;
	int level;
public:
	std::string getName();//姓名获取
	int attack_method();//攻击判定
	int defense_method();//防御判定
	int health_method();//血量判定
	int level_method();//等级判定
};
