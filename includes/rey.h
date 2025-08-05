#pragma once

#include <vector>
#include <cstdint>
#include "tablero.h"

class Rey {
    public:
        void movimientosPseudoLegales(std::vector<uint16_t> movs_legales, Tablero t);

        //Direccion indica para dónde se hace el bit shift. 1 es hacia adelante ("yendo hacia a8"),
        // -1 es hacia atrás ("yendo hacia h1").
        void chequearMovimiento(std::vector<uint16_t> &movs_legales, uint16_t pos,
                                int direccion, int cantidadDeCasillas, Tablero t);
};