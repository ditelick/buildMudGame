#include "room.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
static std::vector <Room*> rooms;

//初始化房间id、房间名字、事件描述
Room::Room(int roomId, const std::string& roomName, const std::string& roomDesc) 
			: _id(roomId), _name(roomName), _desc(roomDesc){ 
}
Room :: ~Room(){
	std::cout << "离开了" << this->_name << std::endl;
}

//访问房间内容
int Room::getRoomId() const {
	return _id;
}
std::string Room::getRoomName() const {
	return _name;
}
std::string Room::getRoomDesc() const {
	return _desc;
}





//等待房间创建——输入房间id与房间位置
void Room::addExits(int roomId, const std::string& direction) {
	exits [direction] = roomId;
}


//房间移动——建立当前房间的指针作中转，获得下一个房间的id
auto Room::roomMove(const std::string& direction) {
	Room* currentRoom = rooms[this->getRoomId()];
	int nextRoomId = currentRoom->getExits(direction);
	if (nextRoomId >= 0) {
		std::cout << "你已进入房间" << nextRoomId << std::endl;
		displayCurrentRoom(nextRoomId);
		
	}
	else {
		std::cout << "请重新输入" << std::endl;
	}

}

//获得房间方向，成功获得则返回房间id
int Room::getExits(const std::string& direction) {
	auto it = exits.find(direction);
	if (it != exits.end()) {
		return it->second;
	}
	else return -1;
}



void Room::displayRoomDirection() {

	if (!exits.empty()) {
		std::cout <<"\t" << _name << std::endl;
		std::cout << "可选方向" << std::endl;
			for (auto& exit : exits) {
				std::cout << exit.first << "\t";
			}
			std::cout << std::endl;
	}
	
}


void Room::displayCurrentRoom(const int& id) {
	displayRoomDirection();
	//displayBattle
}


