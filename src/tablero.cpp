#include <iostream>
#include "../includes/tablero.h"
#include "../includes/utils.h"

Tablero::Tablero() {
    for (int i = 0; i < 12; ++i) {
        piezas[i] = 0;
    }
}

void Tablero::tableroDePrueba() {
    piezas[RB] = 0x8000000; // rey en e4
}

uint64_t Tablero::obtenerRey(Tablero t) {
    return __builtin_ctzll(t.piezas[RB]); // Devuelve la posición del rey blanco
}

uint64_t Tablero::todasLasPiezas() {
    uint64_t todasPiezas = 0;
    for (int i = 0; i < 12; i++) {
        todasPiezas |= piezas[i];
    }
    return todasPiezas;
}

bool Tablero::casillaVacia(uint64_t pos) {
    return (todasLasPiezas() & pos) == 0;
}

void Tablero::moverPieza(uint16_t movimiento) {
    uint64_t salida_bitboard = 1ULL << utils::obtenerSalida(movimiento);
    for (int i = 0; i < 12; i++) {
        if ((salida_bitboard & piezas[i])) {
            piezas[i] &= ~salida_bitboard; // Elimina la pieza de la posición de salida
            uint64_t llegada_bitboard = 1ULL << (utils::obtenerLlegada(movimiento));
            piezas[i] |= llegada_bitboard; // Mueve la pieza a la nueva posición
            return;
        }
    }
}

void Tablero::imprimirTablero() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            uint64_t pos = 1ULL << (i * 8 + j);
            if (casillaVacia(pos)) {
                std::cout << ". ";
            } else {
                bool piezaEncontrada = false;
                for (int k = 0; k < 12; ++k) {
                    if (piezas[k] & pos) {
                        std::cout << k << " "; // Imprime el tipo de pieza
                        piezaEncontrada = true;
                        break;
                    }
                }
                if (!piezaEncontrada) {
                    std::cout << "? "; // Si no se encuentra la pieza, imprime un signo de interrogación
                }
            }
        }
        std::cout << std::endl;
    }
}

void Tablero::imprimirBitboard() {
    for (int i = 0; i < 12; ++i) {
        std::cout << "Pieza " << i << ": " << std::hex << piezas[i] << std::dec << std::endl;
    }
}