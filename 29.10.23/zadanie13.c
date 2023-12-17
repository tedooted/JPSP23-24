#include <stdio.h>
#include <math.h>

int main() {
    double kat_rad;
    int wybor;

    printf("Dla 0 radianów wybierz 1\n");
    printf("Dla 1/6 Pi rad wybierz 2\n");
    printf("Dla 1/4 Pi rad wybierz 3\n");
    printf("Dla 1/3 Pi rad wybierz 4\n");
    printf("Dla 1/2 Pi rad wybierz 5\n");

    printf("\nWybierz kąt (1-5): ");
    scanf("%d", &wybor);

    switch (wybor) {
        case 1:
            kat_rad = 0.0;
            break;
        case 2:
            kat_rad = M_PI / 6.0;
            break;
        case 3:
            kat_rad = M_PI / 4.0;
            break;
        case 4:
            kat_rad = M_PI / 3.0;
            break;
        case 5:
            kat_rad = M_PI / 2.0;
            break;
        default:
            printf("Nieprawidłowy wybór\n");
            return 1;
    }

    printf("\nWybrany kąt w radianach: %.2f\n", kat_rad);

    return 0;
}
