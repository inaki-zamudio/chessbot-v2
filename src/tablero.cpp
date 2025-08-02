#include "../includes/tablero.h"

Tablero::Tablero() {
    for (int i = 0; i < 12; ++i) {
        piezas[i] = 0;
    }
}