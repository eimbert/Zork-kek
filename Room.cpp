#include "Room.h"

Room::Room(string name, string description) {
	this->name = name;
	this->description = description;
	this->east = this->north = this->south = this->west = NULL;
}

void Room::setNorth(Room* n){
	this->north = n;
}

void Room::setSouth(Room* s){
	this->south = s;
}

void Room::setEast(Room* e){
	this->east = e;
}

void Room::setWest(Room* w){
	this->west = w;
}

string Room::getName() {
	return this->name;
}

Room* Room::getNorth()
{
	return this->north;
}

string Room::getDescription() {
	return this->description;
}

Room* Room::getSouth()
{
	return this->south;
}

Room* Room::getEast()
{
	return this->east;
}

Room* Room::getWest()
{
	return this->west;
}
