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
	std::string getName();//������ȡ
	int attack_method();//�����ж�
	int defense_method();//�����ж�
	int health_method();//Ѫ���ж�
	int level_method();//�ȼ��ж�
};
