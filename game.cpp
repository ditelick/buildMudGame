#include "room.h"
#include "player.h"
#include <iostream>
#include <string>
#include <algorithm>




static std::vector <Room*> rooms;

//创建房间&链接房间
void buildRoom() {
	rooms.push_back(new Room(0, "第一个房间", "房间描述 1"));
	rooms.push_back(new Room(1, "第二个房间", "房间描述 2"));
	rooms.push_back(new Room(2, "第三个房间", "房间描述 3"));
	rooms.push_back(new Room(3, "第四个房间", "房间描述 4"));
	rooms.push_back(new Room(4, "第五个房间", "房间描述 5"));


	rooms[0]->addExits(0, "北");
	rooms[1]->addExits(1, "北");
	rooms[2]->addExits(2, "北");
	rooms[3]->addExits(3, "北");
	rooms[4]->addExits(4, "北");
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

