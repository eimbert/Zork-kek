#include "GameBoard.h"

using namespace std;

GameBoard::GameBoard(vector<Room*> h){
	int tamanyoVector = h.size();

	if (tamanyoVector < 5) {
		//El tamaño mínimo de habitaciones para este mapa es de 5.
		exit(-1);
	}

	h[0]->setNorth(h[1]);
	h[0]->setSouth(h[4]);

	h[1]->setSouth(h[2]);

	h[2]->setEast(h[3]);
	h[2]->setSouth(h[4]);

	h[3]->setWest(h[2]);

	h[3]->setWest(h[2]);

	habitaciones = h;

}

Room* GameBoard::getFirstRoom()
{
	return habitaciones[0];
}
