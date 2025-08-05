#include "../includes/rey.h"
#include "../includes/utils.h"

void Rey::movimientosPseudoLegales(std::vector<uint16_t> movs_legales, Tablero t) {
    uint16_t rey = t.obtenerRey(t);
    // Hacia adelante
    chequearMovimiento(movs_legales, rey, 1, 8, t);
}

void Rey::chequearMovimiento(std::vector<uint16_t> &movs_legales, uint16_t pos,
                             int shift, int cantidadDeCasillas, Tablero t) {
    uint64_t bitboard_orig = (1ULL << pos);
    uint64_t destino = (bitboard_orig << (cantidadDeCasillas * (shift == 1))) | bitboard_orig >> (cantidadDeCasillas * (shift == -1));
    
    if(t.casillaVacia(destino)){
        movs_legales.push_back(utils::formatearJugada(pos, pos + cantidadDeCasillas, 0));
    };

}