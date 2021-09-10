#include "Map.h"

Map::Map() {
	this->activeRoom = NULL;
}

void Map::setActiveRoom(Room* a){
	this->activeRoom = a;
}

void Map::AddRoom(Room* room){
	rooms.push_back(room);
}

vector<Room*> Map::getRooms(){
	return rooms;
}

string Map::getNameRoom(){
	return activeRoom->getName() + "\n" + activeRoom->getDescription() + "\n";
}

Room* Map::goNorth(){
	if (activeRoom->getNorth() != NULL) {
		this->activeRoom = activeRoom->getNorth();
		return this->activeRoom;
	}else {
		return NULL;
	}
}

Room* Map::goSouth(){
	if (activeRoom->getSouth() != NULL) {
		this->activeRoom = activeRoom->getSouth();
		return this->activeRoom;
	}
	else {
		return NULL;
	}
}

Room* Map::goEast(){
	if (activeRoom->getEast() != NULL) {
		this->activeRoom = activeRoom->getEast();
		return this->activeRoom;
	}
	else {
		return NULL;
	}
}

Room* Map::goWest(){
	if (activeRoom->getWest() != NULL) {
		this->activeRoom = activeRoom->getWest();
		return this->activeRoom;
	}
	else {
		return NULL;
	}
}
