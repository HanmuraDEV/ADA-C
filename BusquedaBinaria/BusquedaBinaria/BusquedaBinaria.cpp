#include <iostream.h>

int main() {
    int numeros[] = { 2,5,8,12,16,23,38,56,72,91 };
    int inf, sup, mitad, dato = 56;
    char band = 'F';

    inf = 0;
    sup = 10;

    while ((inf <= sup)) {
        mitad = (inf + sup) / 2;
        if (numeros[mitad] == dato) {
            band = 'V';
            break;
        }
        if (numeros[mitad] > dato) {
            sup = mitad - 1;
        }
        if (numeros[mitad] < dato) {
            inf = mitad + 1;
        }
    }

    if (band == 'V') {
        cout << "El numero se encontro en la posicion: " << mitad;
    }
    else {
        cout << "El numero NO se encontro";
    }

    return 0;
}
