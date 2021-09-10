#include "Room.h"

Room::Room(string name, string description) {
	this->name = name;
	this->description = description;
	this->east = this->north = this->south = this->west = NULL;
}

string Room::getName() {
	return this->name;
}

string Room::getDescription() {
	return this->description;
}