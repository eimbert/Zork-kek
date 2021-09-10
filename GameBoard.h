#pragma once
#include<vector>
#include"Room.h"

using namespace std;

class GameBoard{
	vector<Room*> habitaciones;

public:
	GameBoard(vector<Room*> );
	Room* getFirstRoom();
};

