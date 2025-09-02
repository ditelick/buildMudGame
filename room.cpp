#include "room.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
static std::vector <Room*> rooms;

//��ʼ������id���������֡��¼�����
Room::Room(int roomId, const std::string& roomName, const std::string& roomDesc) 
			: _id(roomId), _name(roomName), _desc(roomDesc){ 
}
Room :: ~Room(){
	std::cout << "�뿪��" << this->_name << std::endl;
}

//���ʷ�������
int Room::getRoomId() const {
	return _id;
}
std::string Room::getRoomName() const {
	return _name;
}
std::string Room::getRoomDesc() const {
	return _desc;
}





//�ȴ����䴴���������뷿��id�뷿��λ��
void Room::addExits(int roomId, const std::string& direction) {
	exits [direction] = roomId;
}


//�����ƶ�����������ǰ�����ָ������ת�������һ�������id
auto Room::roomMove(const std::string& direction) {
	Room* currentRoom = rooms[this->getRoomId()];
	int nextRoomId = currentRoom->getExits(direction);
	if (nextRoomId >= 0) {
		std::cout << "���ѽ��뷿��" << nextRoomId << std::endl;
		displayCurrentRoom(nextRoomId);
		
	}
	else {
		std::cout << "����������" << std::endl;
	}

}

//��÷��䷽�򣬳ɹ�����򷵻ط���id
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
		std::cout << "��ѡ����" << std::endl;
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


