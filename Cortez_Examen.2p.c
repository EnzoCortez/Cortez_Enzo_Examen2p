#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MESES 12
#define FILAS 30 // Cambiando la cantidad de insumos a 30
#define COLUMNAS 5

// Función para generar valores aleatorios en la matriz de ingresos
void ingresos(int matriz[MESES][FILAS][COLUMNAS]) {
    srand(time(NULL)); // Semilla para los valores aleatorios

    for (int mes = 0; mes < MESES; mes++) {
        for (int fila = 0; fila < FILAS; fila++) {
            for (int columna = 0; columna < COLUMNAS; columna++) {
                matriz[mes][fila][columna] = rand() % 100; // Valores aleatorios entre 0 y 99
            }
        }
    }
}

// Función para generar valores aleatorios en la matriz de egresos
void egresos(int matriz[MESES][FILAS][COLUMNAS]) {
    srand(time(NULL)); // Semilla para los valores aleatorios

    for (int mes = 0; mes < MESES; mes++) {
        for (int fila = 0; fila < FILAS; fila++) {
            for (int columna = 0; columna < COLUMNAS; columna++) {
                matriz[mes][fila][columna] = rand() % 50; // Valores aleatorios entre 0 y 49
            }
        }
    }
}

// Función para sumar todos los valores de la matriz de ingresos en una matriz única
void sumarIngresos(int matrizIngresos[MESES][FILAS][COLUMNAS], int matrizTotal[FILAS][COLUMNAS]) {
    for (int fila = 0; fila < FILAS; fila++) {
        for (int columna = 0; columna < COLUMNAS; columna++) {
            matrizTotal[fila][columna] = 0; // Inicializar la matriz total en 0
            for (int mes = 0; mes < MESES; mes++) {
                for (int i = 0; i < COLUMNAS; i++) {
                    matrizTotal[fila][i] += matrizIngresos[mes][fila][i];
                }
            }
        }
    }
}

