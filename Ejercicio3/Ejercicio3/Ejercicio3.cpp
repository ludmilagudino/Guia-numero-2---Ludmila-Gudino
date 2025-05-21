//Ejercicio 3: Curar al personaje - if / else
//Ingresar la vida actual y una cantidad de curación.
//Sumar la curación a la vida.
//Si la vida supera 100, mostrar "Vida máxima alcanzada".
//Si es menor a 100, mostrar "Aún puedes curarte más".
//Mostrar la vida resultante.



#include <iostream>
#include "Ejercicio3.h"

int main()
{
    std::cout << "Ejercicio 3: Curar al personaje - if / else." << std::endl;
    IngresarDatosCuracion();
    CurarPersonaje();
}

void IngresarDatosCuracion()
{
    std::cout << "Ingrese vida actual del personaje:" << std::endl;
    std::cin >> vidaActual;
    std::cout << "Ingrese cantidad de curación:" << std::endl;
    std::cin >> curacion;
}

void CurarPersonaje()
{
    int vidaResultante = vidaActual + curacion;

    if (vidaResultante >= 100){
        std::cout << "Vida maxima alcanzada.\n";
    }
    else {
        std::cout << "Aun puedes curarte mas.\n";
    }

    std::cout << "Vida resultante: " << vidaResultante << std::endl;
}
