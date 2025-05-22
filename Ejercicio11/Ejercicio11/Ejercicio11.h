#pragma once

#include <string>

// Variables
std::string nombreJugador;
int vidaJugador;
int ataqueJugador;
int defensaJugador;

std::string nombreEnemigo;
int vidaEnemigo;
int ataqueEnemigo;
int defensaEnemigo;

// Funciones
int CalcularDanio(int ataque, int defensa);
void IngresarDatosCombate();
void SimularCombate();
