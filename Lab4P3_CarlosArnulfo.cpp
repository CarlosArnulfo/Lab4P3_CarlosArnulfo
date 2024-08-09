#include "Cadena.h"

vector <double> SuavizarVector(vector<double> nums1, vector<double> nums2) {//Metodo para suavizar el vector, usando las formulas dadas en el pdf
	for (int item = 0; item < nums1.size(); item++)
	{
		if (!item)
		{
			nums1[item] = nums2[item] * 0.8 + nums2[item + 1] * 0.2;
		}
		else if (item < nums1.size() - 1) {
			nums1[item] = nums2[item - 1] * 0.2 + nums2[item] * 0.6 + nums2[item + 1] * 0.2;
		}
		else {
			nums1[item] = nums2[item] * 0.8 + nums2[item - 1] * 0.2;
		}
	}
	return nums1;
}

void ImprimirVector(vector<double> nums) {//metodo de impresion simple para los valores del vector
	for (int item = 0; item < nums.size();item++)
	{
		cout << nums.at(item) << " ";
	}
	cout << endl;
}

void LlenarVector(vector<double> &nums) {
	for (int item = 0; item < nums.size(); item++)
	{
		
		nums[item] = 50 + double(rand()) / (RAND_MAX / (150 - 50));//asignacion de cada uno de los valores del vector
	}
	
}

double ObtenerPromedio(vector<double> nums) {//aqui se obtiene el valor promedio de los valores del vector
	double promedio = 0;
	for (int item = 0; item < nums.size(); item++)
	{
		promedio += nums[item];
	}
	promedio /= nums.size();
	return promedio;
}

double ObtenerDesviacion(vector<double> nums) {
	double desviacion = 0;
	for (int item = 0; item < nums.size(); item++)
	{
		desviacion += pow((nums[item] - ObtenerPromedio(nums)),2);//aqui conseguimos la desviacion del vector, con la formula dada en el pdf
	}
	desviacion /= nums.size();
	return sqrt(desviacion);
}



void Ejer1() {
	int cantidad=0;
	while (cantidad<3)
	{
		cout << "Ingrese cuantos valores quiere que tenga el vector (mayor que 3)" << endl;
		cin >> cantidad;
	}
	
	vector<double> nums(cantidad);
	LlenarVector(nums);
	cout << "---Resultados---" << endl << endl<<endl;
	cout << "Senial original: ";
	ImprimirVector(nums);
	cout << "Promedio Inicial: " << ObtenerPromedio(nums)<<endl;
	cout << "Desviacion Estandar Inicial: " << ObtenerDesviacion(nums) << endl<<endl;
	for (int item = 0; item < 10; item++)
	{
		nums = SuavizarVector(nums, nums);
		cout << "Despues de " << item+1 << " vuelta(s)"<<endl;
		cout << "Senial suavizada: ";
		ImprimirVector(nums);
		cout << "Promedio " << ObtenerPromedio(nums)<<endl;
		cout << "Desviacion Estandar "<<ObtenerDesviacion(nums)<<endl<<endl;
	}
}

void Ejer2() {
	char* cadena = new char[40];
	cout << "Ingrese una cadena: ";
	cout << endl;
	cin.ignore().getline(cadena, 40);
	Cadena cad(cadena);
	delete[] cadena;
	cout << "Cadena ingresada: " << cad.Print() << endl;
	cad.Estadisticas();
}

void Menu() {
	
	int menu = 0;
	
	while (menu!=3)
	{
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Salir" << endl;
		cin >> menu;
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
	srand(time(NULL));
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
