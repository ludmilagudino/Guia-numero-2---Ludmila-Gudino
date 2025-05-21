//Ejercicio 4: Calcular experiencia necesaria para subir de nivel - if / else if / else
//Ingresar el nivel actual del personaje y calcular cuánta experiencia necesita para el próximo nivel :
//
//-Si el nivel es menor a 10, mostrar "Nivel bajo, necesitas 100 XP".
//
//- Si el nivel está entre 10 y 19, mostrar "Nivel medio, necesitas 250 XP".
//
//- Si el nivel es 20 o más, mostrar "Nivel alto, necesitas 500 XP".


#include <iostream>
#include "Ejercicio4.h"

int main()
{
    std::cout << "Ejercicio 4: Calcular experiencia necesaria para subir de nivel - if / else if / else." << std::endl;;
    IngresarNivel();
    CalcularExperiencia();
}

void IngresarNivel()
{
    std::cout << "Ingrese el nivel actual del personaje:" << std::endl;;
    std::cin >> nivelActual;
}

void CalcularExperiencia()
{
    if (nivelActual < 10) {
        std::cout << "Nivel bajo, necesitas 100 XP." << std::endl;;
    }
    else if (nivelActual >= 10 && nivelActual < 20) {
        std::cout << "Nivel medio, necesitas 250 XP." << std::endl;;
    }
    else {
        std::cout << "Nivel alto, necesitas 500 XP." << std::endl;;
    }
}

//PREGUNTAR EN QUE CASOS USAR EL << std::endl; Y EL \n
