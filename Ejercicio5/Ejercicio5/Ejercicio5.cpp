//
//Ejercicio 5: Multiplicar monedas recogidas por un multiplicador - if / else if / else
//Pedir cantidad de monedas recogidas y un multiplicador.
//
//- Si el multiplicador es 1, mostrar “Sin bonificación”.
//
//- Si es 2, mostrar “Bonificación x2 activa”.
//
//- En cualquier otro caso, mostrar “Bonificación personalizada”.
//Mostrar el total de monedas multiplicadas.
//


#include <iostream>
#include "Ejercicio5.h"

int main()
{
    std::cout << "Ejercicio 5: Multiplicar monedas recogidas por un multiplicador - if / else if / else." << std::endl;
    IngresarMonedas();
    CalcularBonificacion();
}

void IngresarMonedas()
{
    std::cout << "Ingrese la cantidad de monedas recogidas:" << std::endl;
    std::cin >> monedasRecogidas;

    std::cout << "Ingrese el multiplicador: ";
    std::cin >> multiplicador;
}

void CalcularBonificacion()
{
    int total = monedasRecogidas * multiplicador;

    if (multiplicador == 1) {
        std::cout << "Sin bonificacion." << std::endl;
    }
    else if (multiplicador == 2) {
        std::cout << "Bonificacion x2 activa." << std::endl;
    }
    else {
        std::cout << "Bonificacion personalizada." << std::endl;
    }

    std::cout << "Total de monedas: " << total << std::endl;
}
