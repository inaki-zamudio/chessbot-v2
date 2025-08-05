#pragma once

#include <cstdint>

class utils {
    public:
        static uint16_t formatearJugada(int salida, int llegada, int tipoDeJugada);
        static uint16_t obtenerLlegada(uint16_t movimiento);
        static uint16_t obtenerSalida(uint16_t movimiento);
        static uint16_t obtenerTipoDeJugada(uint16_t movimiento);
};

