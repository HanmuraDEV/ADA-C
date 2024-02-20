#include <iostream.h>

int main() {
    int numeroDecimal = 10;
    int cociente, residuo;
    int binario[50], i = 0;

    cociente = numeroDecimal;

    while (cociente != 0) {
        residuo = cociente % 2;
        cociente = cociente / 2;
        binario[i] = residuo;
        i++;
    }

    cout << "El binario equivalente es: ";

    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }

    return 0;
}
