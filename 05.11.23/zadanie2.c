#include <stdio.h>

int main() {
    unsigned int a, b;
    unsigned int wynik = 1; 

    printf("Podaj liczbe naturalna a: ");
    scanf("%u", &a);

    printf("Podaj liczbe naturalna b: ");
    scanf("%u", &b);

    for (unsigned int i = 0; i < b; i++) {
        wynik *= a;
    }

    printf("%u^%u = %d\n", a, b, wynik);

    return 0;
}
