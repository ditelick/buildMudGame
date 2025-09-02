#pragma once
#include <string>
#include <vector>
#include <map>

class Room {
private:

	//基础信息设定
	int _id;
	std::string _name;
	std::string _desc;

	//连接房间设定
	std::map < std::string, int> exits;//进入方向所对应的房间id

public:

	//初始化房间信息
	Room(int roomId, const std::string& roomName, const std::string& roomDesc);
	~Room();

	//访问房间信息
	int getRoomId() const;
	std::string getRoomName() const;
	std::string getRoomDesc() const;

	//新建出口——通过获取房间id和方向
	void addExits(int roomId, const std::string &roomDesc);

	//从房间里出去的行为——通过方向是否匹配返回房间id
	int getExits(const std::string& direction);

	//房间移动
	auto roomMove(const std::string& direction);

	//展示当前玩家所在的房间的全部信息
	void displayCurrentRoom(const int& id);

	//展示房间方位信息
	void displayRoomDirection();


};

