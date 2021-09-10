#pragma once
#include<vector>
#include<string>
#include"Room.h"

class Map{
	vector<Room*> rooms;
public:
	void AddRoom(Room*);

	string getNameRoom();
};

