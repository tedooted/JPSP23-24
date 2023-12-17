#include <stdio.h>

int main() {
    int rozmiar;

    // Pobierz rozmiar tablicy od użytkownika
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &rozmiar);

    // Deklaruj tablicę o podanym rozmiarze
    int liczby[rozmiar];

    // Wczytaj liczby od użytkownika do tablicy
    printf("Podaj %d liczb:\n", rozmiar);
    for (int i = 0; i < rozmiar; ++i) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &liczby[i]);
    }

    // Wyświetl wczytane liczby
    printf("Wczytane liczby:\n");
    for (int i = 0; i < rozmiar; ++i) {
        printf("%d ", liczby[i]);
    }
    printf("\n");

    return 0;
}
