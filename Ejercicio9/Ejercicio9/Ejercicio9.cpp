//Ejercicio 9: Ingresar los stats del jugador y mostrarlos en pantalla -
//Pedir al usuario que ingrese :
//
//Nombre
//Ataque
//Defensa
//Velocidad de ataque
//Vida máxima
//Multiplicador de daño crítico
//
//Luego :
//
//Si el multiplicador es mayor a 2, mostrar “Crítico alto”
//
//Si es menor o igual a 1, mostrar “Crítico bajo”
//
//Si está entre 1 y 2, mostrar “Crítico normal”
//Mostrar todos los stats.

#include <iostream>
#include "Ejercicio9.h"

int main()
{
    std::cout << "Ejercicio 9: Ingresar los stats del jugador y mostrarlos en pantalla" << std::endl;;
    IngresarStats();
    MostrarStats();
}

void IngresarStats()
{
    std::cout << "Nombre del jugador: ";
    std::cin >> nombre;

    std::cout << "Ataque: ";
    std::cin >> ataque;

    std::cout << "Defensa: ";
    std::cin >> defensa;

    std::cout << "Velocidad de ataque: ";
    std::cin >> velocidad;

    std::cout << "Vida maxima: ";
    std::cin >> vidaMax;

    std::cout << "Multiplicador de critico: ";
    std::cin >> multiplicadorCritico;
}

void MostrarStats()
{
    if (multiplicadorCritico > 2)
        std::cout << "Critico alto." << std::endl;
    else if (multiplicadorCritico <= 1)
        std::cout << "Critico bajo." << std::endl;
    else
        std::cout << "Critico normal." << std::endl;

    std::cout << "Nombre: " << nombre << "\nAtaque: " << ataque << "\nDefensa: " << defensa
        << "\nVelocidad de ataque: " << velocidad << "\nVida maxima: " << vidaMax
        << "\nMultiplicador de critico: " << multiplicadorCritico << std::endl;
}