#include "Cadena.h"
Cadena::Cadena(const char* c) {
    cad = new char[strlen(c) + 1];
    strcpy_s(cad, strlen(c) + 1, c);
}

Cadena::~Cadena()
{
    if (cad)
    {
        delete cad;
    }
}

char* Cadena::Print()
{
    return cad;
}

void Cadena::Estadisticas()
{
    vector<int> cantidades;
    vector<char> caracteres;
    for (int caracter= 0; caracter < strlen(cad); caracter++)
    {
        bool existe = false;
        for (int item = 0; item < caracteres.size(); item++)
        {
            if (cad[caracter]==caracteres[item])
            {
                cantidades[item]++;
                existe = true;
            }
        }
        if (!existe)
        {
            caracteres.push_back(cad[caracter]);
            cantidades.push_back(1);
        }
    }
    cout << "Estadisticas: " << endl;
    for (int item = 0; item < caracteres.size(); item++)
    {
        cout << caracteres[item] << ": " << cantidades[item] << endl;
    }
}
