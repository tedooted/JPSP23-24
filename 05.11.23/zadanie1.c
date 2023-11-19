#include <stdio.h>
#include <math.h>

int main() {
    int n, suma = 0;

    printf("Podaj liczbe naturalna n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }

    printf("Suma kwadratow liczb od 1 do %d wynosi: %d\n", n, suma);

    return 0;
}