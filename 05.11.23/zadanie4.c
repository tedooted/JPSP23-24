#include <stdio.h>

void tablicaKwadratow(const int* tablica, int rozmiar, int* wyniki) {
    for (int i = 0; i < rozmiar; ++i) {
        wyniki[i] = tablica[i] * tablica[i];
    }
}

int main() {
    int rozmiar;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &rozmiar);

    int liczby[rozmiar];
    int kwadraty[rozmiar];

    printf("Podaj %d liczb:\n", rozmiar);
    for (int i = 0; i < rozmiar; ++i) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &liczby[i]);
    }

    tablicaKwadratow(liczby, rozmiar, kwadraty);

    printf("\nTablica liczb: ");
    for (int i = 0; i < rozmiar; ++i) {
        printf("%d ", liczby[i]);
    }

    printf("\nTablica kwadratów: ");
    for (int i = 0; i < rozmiar; ++i) {
        printf("%d ", kwadraty[i]);
    }
    printf("\n");

    return 0;
}
