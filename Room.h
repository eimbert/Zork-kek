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
	string getName();
	string getDescription();
};

