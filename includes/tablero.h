#pragma once

#include <cstdint>

enum tipoDePieza { // Sirve para indexar el arreglo de piezas
    VACIO, // 0
    RB, DB, TB, AB, CB, PB,
    RN, DN, TN, AN, CN, PN
};

class Tablero {
    private:
        uint64_t piezas[12];
    
    public:
        Tablero();
        void tableroDePrueba(); // Crea un tablero de prueba con el rey en e4
        uint64_t obtenerRey(Tablero t) const; // Devuelve la posición del rey en el tablero
        bool casillaVacia(uint64_t pos) const; // Verifica si una casilla está vacía
};