#include <iostream>
#include "../includes/utils.h"
#include "../includes/tablero.h"

int main() {
    Tablero t;
    t.tableroDePrueba();
    t.imprimirBitboard();
    t.moverPieza(utils::formatearJugada(28, 36, 0)); // Mueve el rey de e4 a e5
    printf("Después de mover el rey:\n");
    t.imprimirBitboard();
    return 0;
}
