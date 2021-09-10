#pragma once
#include<string>

using namespace std;

class Room{
	string name;
	string description;
	Room* north;
	Room* south;
	Room* east;
	Room* west;

public:
	Room(string, string);
	void setNorth(Room*);
	void setSouth(Room*);
	void setEast(Room*);
	void setWest(Room*);
	Room* getNorth();
	Room* getSouth();
	Room* getEast();
	Room* getWest();
	string getName();
	string getDescription();
};

