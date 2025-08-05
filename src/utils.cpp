#include "../includes/utils.h"

uint16_t utils::formatearJugada(int salida, int llegada, int tipoDeJugada) {
    return (static_cast<uint16_t>(tipoDeJugada) << 12) | (static_cast<uint16_t>(llegada) << 6) | static_cast<uint16_t>(salida);
}

uint16_t utils::obtenerLlegada(uint16_t movimiento) {
    return (movimiento >> 6) & 0x3F;
}

uint16_t utils::obtenerSalida(uint16_t movimiento) {
    return (movimiento & 0x3F);
}

uint16_t utils::obtenerTipoDeJugada(uint16_t movimiento) {
    return movimiento >> 12;
}