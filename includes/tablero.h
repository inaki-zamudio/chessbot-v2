#ifndef TABLERO_H
#define TABLERO_H

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
};

#endif 