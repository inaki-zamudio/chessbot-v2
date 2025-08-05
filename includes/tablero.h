#pragma once

#include <cstdint>

enum tipoDePieza { // Sirve para indexar el arreglo de piezas
    RB, DB, TB, AB, CB, PB,
    RN, DN, TN, AN, CN, PN,
    VACIO, // 0
};

class Tablero {
    private:
        uint64_t piezas[12];
    
    public:
        Tablero();
        void tableroDePrueba(); // Crea un tablero de prueba con el rey en e4
        uint64_t obtenerRey(Tablero t); // Devuelve la posición del rey en el tablero
        uint64_t todasLasPiezas(); // Devuelve el bitboard con todas las piezas del tablero
        bool casillaVacia(uint64_t pos); // Verifica si una casilla está vacía
        void moverPieza(uint16_t movimiento); // Mueve una pieza de una posición a otra
        void imprimirTablero(); // Imprime el tablero en la consola
        void imprimirBitboard(); // Imprime el bitboard de las piezas
};