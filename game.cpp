#include "room.h"
#include "player.h"
#include <iostream>
#include <string>
#include <algorithm>




static std::vector <Room*> rooms;

//��������&���ӷ���
void buildRoom() {
	rooms.push_back(new Room(0, "��һ������", "�������� 1"));
	rooms.push_back(new Room(1, "�ڶ�������", "�������� 2"));
	rooms.push_back(new Room(2, "����������", "�������� 3"));
	rooms.push_back(new Room(3, "���ĸ�����", "�������� 4"));
	rooms.push_back(new Room(4, "���������", "�������� 5"));


	rooms[0]->addExits(0, "��");
	rooms[1]->addExits(1, "��");
	rooms[2]->addExits(2, "��");
	rooms[3]->addExits(3, "��");
	rooms[4]->addExits(4, "��");
}


void startUI() {

}






void gameInit() {
	buildRoom();
	rooms[0]->displayCurrentRoom(0);
}

int main() {
	gameInit();
}

