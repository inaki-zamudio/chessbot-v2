//
// Created by axel on 05/08/25.
//

#include "../includes/utils.h"

uint16_t utils::formatearJugada(int salida, int llegada, int tipoDeJugada) {
    return (static_cast<uint16_t>(tipoDeJugada) << 12) | (static_cast<uint16_t>(salida) << 6) | static_cast<uint16_t>(llegada);
}