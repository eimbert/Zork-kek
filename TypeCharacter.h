#pragma once
#include<iostream>

using namespace std;

class TypeCharacter{
	DWORD miliseconds;

public:
	TypeCharacter();
	TypeCharacter(int);
	void operator<<(string);
};

