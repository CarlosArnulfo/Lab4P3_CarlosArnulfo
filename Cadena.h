#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Cadena
{
private:
	char* cad = nullptr;
	int longitud;
public:
	Cadena(const char* c);
	~Cadena();
	char* Print();
	void Estadisticas();
};

