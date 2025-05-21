//Ejercicio 1: Sumar puntos al jugador - if.
//Pedir al usuario los puntos iniciales y los puntos ganados.
//Si los puntos ganados son mayores a 100, mostrar un mensaje especial de "¡Gran puntuación!".
//Mostrar el total.


#include <iostream>

#include "Ejercicio1.h"


int main()
{
    std::cout << "Ejercicio 1: Sumar puntos al jugador - if.\n";
    IngresarPuntos();
    ChequearPuntuacion();
}

void IngresarPuntos()
{
    std::cout << "Ingrese puntos iniciales: "<<std::endl;
    std::cin >> puntosIniciales;
    std::cout << "Ingrese puntos ganados: " << std::endl;
    std::cin >> puntosGanados;
}

void ChequearPuntuacion()
{
 int total = puntosIniciales + puntosGanados;

   if (puntosGanados >= 100) {
       std::cout << "¡Gran puntuacion!\n";
   }
    std::cout << "Total de puntos: " << total << "<<std::endl";
}


