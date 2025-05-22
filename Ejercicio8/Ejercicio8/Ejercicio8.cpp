//Ejercicio 8: Crear una función que calcule daño - if
//La función CalcularDanio(int ataque, int defensa) debe devolver ataque - defensa.
//Si el resultado es menor o igual a cero, mostrar “El ataque fue inútil”.
//Si es mayor a cero, mostrar “El enemigo recibió daño”.
//Mostrar el valor del daño.

#include <iostream>
#include "Ejercicio8.h"

int main()
{
    std::cout << "Ejercicio 8: Calcular danio." << std::endl;
    IngresarEstadisticas();
    MostrarDanio();
}

int CalcularDanio(int ataque, int defensa)
{
    int danio = ataque - defensa;

    return danio;
}

void IngresarEstadisticas()
{
    std::cout << "Ingrese valor de ataque: ";
    std::cin >> ataque;

    std::cout << "Ingrese valor de defensa: ";
    std::cin >> defensa;
}

void MostrarDanio()
{
    int danio = CalcularDanio(ataque, defensa);
    int danioFinal;

    if (danio <= 0) {
        std::cout << "El ataque fue inutil." << std::endl;
        danioFinal = 0;
    }
    else {
        std::cout << "El enemigo recibio daño." << std::endl;
        danioFinal = danio;
    }

    std::cout << "Danio final: " << danioFinal << std::endl;
}
