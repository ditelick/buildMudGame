#pragma once
#include <string>
#include <vector>
#include <map>

class Room {
private:

	//������Ϣ�趨
	int _id;
	std::string _name;
	std::string _desc;

	//���ӷ����趨
	std::map < std::string, int> exits;//���뷽������Ӧ�ķ���id

public:

	//��ʼ��������Ϣ
	Room(int roomId, const std::string& roomName, const std::string& roomDesc);
	~Room();

	//���ʷ�����Ϣ
	int getRoomId() const;
	std::string getRoomName() const;
	std::string getRoomDesc() const;

	//�½����ڡ���ͨ����ȡ����id�ͷ���
	void addExits(int roomId, const std::string &roomDesc);

	//�ӷ������ȥ����Ϊ����ͨ�������Ƿ�ƥ�䷵�ط���id
	int getExits(const std::string& direction);

	//�����ƶ�
	auto roomMove(const std::string& direction);

	//չʾ��ǰ������ڵķ����ȫ����Ϣ
	void displayCurrentRoom(const int& id);

	//չʾ���䷽λ��Ϣ
	void displayRoomDirection();


};

