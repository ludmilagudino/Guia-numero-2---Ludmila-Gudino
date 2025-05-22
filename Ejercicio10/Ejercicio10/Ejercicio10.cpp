//Ejercicio 10: Calcular tiempo total de juego - if / else if / else
//Pedir cuántos minutos jugó el jugador en tres días distintos.
//Mostrar :
//
//    El total de minutos jugados
//
//    El promedio por día
//
//    Y el total en formato horas : minutos
//
//    Además :
//
//Si jugó más de 10 horas totales, mostrar “Jugador muy activo”
//
//Si jugó entre 5 y 10 horas, mostrar “Jugador regular”
//
//Si jugó menos de 5 horas, mostrar “Jugador casual”


#include <iostream>
#include "Ejercicio10.h"

int main()
{
    std::cout << "Ejercicio 10: Calcular tiempo total de juego - if / else if / else" << std::endl;
    IngresarTiempos();
    CalcularTiempos();
}

void IngresarTiempos()
{
    std::cout << "Minutos jugados el dia 1: ";
    std::cin >> dia1;
    std::cout << "Minutos jugados el dia 2: ";
    std::cin >> dia2;
    std::cout << "Minutos jugados el dia 3: ";
    std::cin >> dia3;
}

void CalcularTiempos()
{
    int total = dia1 + dia2 + dia3;
    int promedio = total / 3;
    int horas = total / 60;
    int minutos = total % 60;

    std::cout << "Total minutos: " << total << "\nPromedio de minutos por dia: " << promedio;
    std::cout << "\nTotal jugado: " << horas << " horas y " << minutos << " minutos." << std::endl;;

    if (horas > 10)
        std::cout << "Jugador muy activo." << std::endl;
    else if (horas >= 5)
        std::cout << "Jugador regular." << std::endl;
    else
        std::cout << "Jugador casual." << std::endl;;
}
