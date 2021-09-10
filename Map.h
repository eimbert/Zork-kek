#pragma once
#include<vector>
#include<string>
#include"Room.h"

class Map{
	vector<Room*> rooms;
	Room* activeRoom;
public:
	Map();
	void setActiveRoom(Room*);
	void AddRoom(Room*);
	vector<Room*> getRooms();
	string getNameRoom();
	Room* goNorth();
	Room* goSouth();
	Room* goEast();
	Room* goWest();
};

