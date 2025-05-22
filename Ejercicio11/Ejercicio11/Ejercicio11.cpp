//Ejercicio 11: Simulación de combate simple - Como quieran!
//Crear un programa que pida :
//
//Nombre, vida, ataque y defensa del jugador
//
//Nombre, vida, ataque y defensa del enemigo
//
//Luego :
//
//Usar una función CalcularDanio para calcular :
//
//Daño del jugador al enemigo = ataqueJugador - defensaEnemigo
//
//Daño del enemigo al jugador = ataqueEnemigo - defensaJugador
//
//Usar condicionales para asegurar que el daño no sea negativo(mínimo 0)
//
//Restar los daños a las vidas
//
//Mostrar todos los valores resultantes después del intercambio de ataques
//
//Mostrar :
//
//Vida inicial y final del jugador y del enemigo
//
//Si algún personaje queda con vida menor o igual a 0, mostrar :
//
//    “Jugador derrotado”
//
//    “Enemigo derrotado”
//
//    Si ambos quedan vivos, mostrar “El combate continúa”


#include <iostream>

#include <iostream>
#include "Ejercicio11.h"

int main()
{
    std::cout << "Ejercicio 11: Simulación de combate simple." << std::endl;
    IngresarDatosCombate();
    SimularCombate();
}

int CalcularDanio(int ataque, int defensa)
{
    int danio = ataque - defensa;

    if (danio > 0)
        return danio;
    else
        return 0;

}

void IngresarDatosCombate()
{
    std::cout << "Nombre del jugador: ";
    std::cin >> nombreJugador;

    std::cout << "Vida del jugador: ";
    std::cin >> vidaJugador;
    std::cout << "Ataque del jugador: ";
    std::cin >> ataqueJugador;
    std::cout << "Defensa del jugador: ";
    std::cin >> defensaJugador;

    std::cout << "Nombre del enemigo: ";
    std::cin >> nombreEnemigo;

    std::cout << "Vida del enemigo: ";
    std::cin >> vidaEnemigo;
    std::cout << "Ataque del enemigo: ";
    std::cin >> ataqueEnemigo;
    std::cout << "Defensa del enemigo: ";
    std::cin >> defensaEnemigo;

}

void SimularCombate()
{
    int danioAlEnemigo = CalcularDanio(ataqueJugador, defensaEnemigo);
    int danioAlJugador = CalcularDanio(ataqueEnemigo, defensaJugador);

    int vidaFinalJugador = vidaJugador - danioAlJugador;
    int vidaFinalEnemigo = vidaEnemigo - danioAlEnemigo;

    std::cout << "\n" << nombreJugador << ": Vida inicial = " << vidaJugador << ", final = " << vidaFinalJugador;
    std::cout << "\n" << nombreEnemigo << ": Vida inicial = " << vidaEnemigo << ", final = " << vidaFinalEnemigo << std::endl;

    if (vidaFinalJugador <= 0 && vidaFinalEnemigo <= 0)
        std::cout << "Ambos han sido derrotados." << std::endl;
    else if (vidaFinalJugador <= 0)
        std::cout << "Jugador derrotado." << std::endl;
    else if (vidaFinalEnemigo <= 0)
        std::cout << "Enemigo derrotado." << std::endl;
    else
        std::cout << "El combate continúa." << std::endl;
}
