#include "../includes/tablero.h"

Tablero::Tablero() {
    for (int i = 0; i < 12; ++i) {
        piezas[i] = 0;
    }
}

void Tablero::tableroDePrueba() {
    piezas[RB] = 0x8000000; // rey en e4
}

uint64_t Tablero::obtenerRey(Tablero t) const {
    return __builtin_ctzll(t.piezas[RB]); // Devuelve la posición del rey blanco
}

bool Tablero:: casillaVacia(uint64_t pos) const {
    for (int i = 0; i < 12; ++i) {
        if (piezas[i] & (1ULL << pos)) {
            return false;
        }
    }
    return true;
}