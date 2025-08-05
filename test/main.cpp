#include <iostream>
#include "../includes/tablero.h"

int main() {
    Tablero t;

    /* básicamente, la idea es ir implementando de a poquito que el rey se mueva para todas las direcciones. Para escribir tests habría que usar un framework y alta paja, entonces la idea del test va a ser verificarlo a manopla, ya que es chiquito pero la idea sería algo así:

    rey.generarMovimientosLegales(Tablero t);

    esto correctamente genere el movimiento hacia adelante, por ejemplo
    Y después podrías seguir con los movimientos para los costados, y después atrás, o en el orden que quieras. Después, estaría bueno fijarse que no se caiga del tablero el rey, para cada uno de los costados.

    Con eso ya estaría.

    Después si querés más tarde nos ponemos con que haga esos movimientos, y/o con alguna otra pieza.

    Nota: esto no asegura que el código no quede choto, la idea es irlo refactorizando sobre la marcha, o una vez pase todos los "tests".

    */
    return 0;
}
