//Ejercicio 2: Calcular daño recibido - if.
//Ingresar la vida actual del personaje y cuánto daño recibe.
//Restar el daño a la vida.
//Si la vida resultante es menor o igual a 0, mostrar “¡Has muerto!”.
//Mostrar la vida resultante.


#include <iostream>
#include "Ejercicio2.h"

int main()
{
    std::cout << "Ejercicio 2: Calcular daño recibido - if.\n";
    IngresarDatos();
    CalcularVidaRestante();
}

void IngresarDatos()
{
    std::cout << "Ingrese vida actual del personaje: ";
    std::cin >> vidaActual;
    std::cout << "Ingrese danio recibido: ";
    std::cin >> danioRecibido;
}

void CalcularVidaRestante()
{
    int vidaRestante = vidaActual - danioRecibido;

    if (vidaRestante <= 0) {
        std::cout << "¡Has muerto!\n";
    }

    std::cout << "Vida restante: " << vidaRestante << std::endl;
}
