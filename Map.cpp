#include "Map.h"

void Map::AddRoom(Room* room){
	rooms.push_back(room);
}

string Map::getNameRoom(){
	Room* active = NULL;
	active = rooms[0];
	return active->getName();
}
