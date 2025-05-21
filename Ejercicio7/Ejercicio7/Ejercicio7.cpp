
//Ejercicio 7: Crear una función que sume dos números - enumerador y switch
//Crear una función Sumar(int a, int b) que devuelva el resultado.
//Usar un enum con tipos de recursos : PUNTOS = 1, MONEDAS = 2, EXPERIENCIA = 3.
//Pedir al usuario qué tipo de recurso quiere sumar y usar switch para mostrar un mensaje acorde :
//
//“Has ganado puntos”
//
//“Has ganado monedas”
//
//“Has ganado experiencia”
//
//Mostrar el total sumado
// 

#include <iostream>
#include "Ejercicio7.h"

int main() {
    std::cout << "Ejercicio 7: Sumar recursos.\n";
    IngresarDatos();
    MostrarSuma();


	return 0;
}

int Sumar(int a, int b)
{
    int total = a + b;
	return total;
}

void IngresarDatos()
{
	std::cout << "Ingrese el primer valor a sumar:" << std::endl;
	std::cin >> valorA;

	std::cout << "Ingrese el segundo valor a sumar:" << std::endl;
	std::cin >> valorB;

	std::cout << "Seleccione objeto a comprar:" << std::endl;
	std::cout << "1- Puntos" << std::endl;
	std::cout << "2- Monedas" << std::endl;
	std::cout << "3- Experiencias" << std::endl;

	std::cin >> tipoRecurso;
}

void MostrarSuma()
{

    switch (tipoRecurso)
    {
    case PUNTOS:
        std::cout << "Has ganado puntos. Total: " << Sumar(valorA, valorB) << std::endl;
        break;
    case MONEDAS:
        std::cout << "Has ganado monedas. Total: " << Sumar(valorA, valorB) << std::endl;
        break;
    case EXPERIENCIA:
        std::cout << "Has ganado experiencia. Total: " << Sumar(valorA, valorB) << std::endl;
        break;
    default:
        std::cout << "No es un tipo de recurso." << std::endl;
    }
}