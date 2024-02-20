#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int numeros[] = { 3, 4, 5, 2, 1 };
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int i;

    selectionSort(numeros, n);

    printf("Orden ascendente:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nOrden descendente:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    return 0;
}