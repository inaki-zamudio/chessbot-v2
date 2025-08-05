#include <iostream>
#include "../includes/utils.h"
#include "../includes/tablero.h"

int main() {
    Tablero t;
    t.tableroDePrueba();
    t.imprimirTablero();
    t.moverPieza(utils::formatearJugada(27, 35, 0)); // Mueve el rey de e4 a e5
    printf("Después de mover el rey:\n");
    t.imprimirTablero();
    return 0;
}
