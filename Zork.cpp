// Zork.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>
#include"Room.h"
#include"Map.h"
#include"GameBoard.h"

using namespace std;

int main(){
    Map tablero;

    tablero.AddRoom(new Room("Primera", "Habitación de inicio"));
    tablero.AddRoom(new Room("Segunda", "Habitación Norte"));
    tablero.AddRoom(new Room("Primera", "Habitación Centro"));
    tablero.AddRoom(new Room("Primera", "Habitación Este"));
    tablero.AddRoom(new Room("Primera", "Habitación Sur"));

    GameBoard gameBoard = GameBoard(tablero.getRooms());
    tablero.setActiveRoom(gameBoard.getFirstRoom());
    SetConsoleOutputCP(CP_UTF8);
    cout << tablero.getNameRoom();

    if(tablero.goNorth() != NULL)
        cout << tablero.getNameRoom();
    else
        cout << "La habitacion no tiene conexiones al norte\n";

    if (tablero.goEast() != NULL)
        cout << tablero.getNameRoom();
    else
        cout << "La habitacion no tiene conexiones al Este\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
