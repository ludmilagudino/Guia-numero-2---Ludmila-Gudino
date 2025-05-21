#pragma once

// Clases
enum Recurso {
	PUNTOS = 1,
	MONEDAS = 2,
	EXPERIENCIA = 3 
};

// Variables
int valorA;
int valorB;
int tipoRecurso;

// Funciones
int Sumar(int a, int b);
void IngresarDatos();
void MostrarSuma();