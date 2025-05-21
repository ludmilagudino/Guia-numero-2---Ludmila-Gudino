//Ejercicio 6: Sistema simple de compra - enumerador y switch
//Definir un enum con tipos de objetos : ESPADA = 1, ESCUDO = 2, POTION = 3.
//Pedir al usuario la cantidad de monedas y el tipo de objeto a comprar.
//Usar un switch para restar el precio según el objeto :
//
//-Espada cuesta 100
//
//- Escudo cuesta 75
//
//- Poción cuesta 25
//
//Mostrar las monedas restantes.
//Si no hay suficientes monedas, mostrar “No puedes comprar este objeto”.

#include <iostream>
#include "Ejercicio6.h"

int main()
{
    std::cout << "Ejercicio 6: Sistema simple de compra." << std::endl;
    IngresarCompra();
    ProcesarCompra();
}

void IngresarCompra()
{
    std::cout << "Ingrese cantidad de monedas:" << std::endl;
    std::cin >> monedas;

    std::cout << "Seleccione objeto a comprar:" << std::endl;
    std::cout << "1- Espada" << std::endl;
    std::cout << "2- Escudo" << std::endl;
    std::cout << "3- Potion" << std::endl;

    std::cin >> tipoObjeto;
}

void ProcesarCompra()
{
    int precio = 0;

    switch (tipoObjeto)
    {
    case ESPADA:
        std::cout << "1- Espada" << std::endl;
        std::cout << "Espada cuesta 100 monedas" << std::endl;
        precio = 100;
        break;
    case ESCUDO:
        std::cout << "2- Escudo" << std::endl;
        std::cout << "Escudo cuesta 75" << std::endl;
        precio = 75;
        break;
    case POTION:
        std::cout << "3- Potion" << std::endl;
        std::cout << "Potion cuesta 25" << std::endl;
        precio = 25;
        break;
    default:
        std::cout << "Objeto no valido." << std::endl;
        return;
    }

    if (monedas >= precio) {
        monedas -= precio;
        std::cout << "Objeto comprado. Monedas restantes: " << monedas << std::endl;
    }
    else {
        std::cout << "No puedes comprar este objeto. Tu cantidad de monedas es" << monedas << std::endl;
    }
}
