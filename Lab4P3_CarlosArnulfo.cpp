#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void ImprimirVector(vector<double> nums) {
	cout << "Senial suavizada :" << endl;
	for (int item = 0; item < nums.size();item++)
	{
		cout << nums.at(item) << " ";
	}
	cout << endl;
}

void LlenarVector(vector<double> &nums) {
	for (int item = 0; item < nums.size(); item++)
	{
		nums[item] = (RAND_MAX/(150-50));
	}
	
}

void Ejer1() {
	int cantidad;
	cout << "Ingrese cuantos valores quiere que tenga el vector" << endl;
	cin >> cantidad;
	vector<double> nums(cantidad);
	LlenarVector(nums);
}

void Ejer2() {

}

void Menu() {
	srand(time(NULL));
	int menu = 0;
	cout << "1. Ejercicio 1" << endl;
	cout << "2. Ejercicio 2" << endl;
	cout << "3. Salir" << endl;
	while (menu!=3)
	{
		if (menu==1)
		{
			Ejer1();
		}
		else if (menu == 2) {
			Ejer2();
		}
		else if (menu == 3) {
			cout << "Gracias por ver mi lab" << endl;
		}
		else {
			cout << "Elija una opcion valida" << endl;
		}
	}
}

int main()
{
	Menu();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
