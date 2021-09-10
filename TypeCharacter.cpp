#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>
#include <cassert>

#include "TypeCharacter.h"

void TypeCharacter::operator<<(string s){
	
	for (int i = 0; i < s.size(); i++) {
		cout << s.at(i);
		if(s.at(i) != ' ' && s.at(i) != '\n') Beep(10, 5);
		Sleep(this->miliseconds);
	}
}

TypeCharacter::TypeCharacter(){
	this->miliseconds = 200;
}

TypeCharacter::TypeCharacter(int s){
	this->miliseconds = s;
}
