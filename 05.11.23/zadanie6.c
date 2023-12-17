#include <stdio.h>
#include <stdbool.h>

// Funkcja sprawdzająca, czy liczba jest pierwsza
bool czyPierwsza(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int liczba;

    // Wprowadź liczbę od użytkownika
    printf("Podaj liczbę: ");
    scanf("%d", &liczba);

    // Sprawdź, czy liczba jest pierwsza i wyświetl wynik
    if (czyPierwsza(liczba)) {
        printf("%d jest liczbą pierwszą.\n", liczba);
    } else {
        printf("%d nie jest liczbą pierwszą.\n", liczba);
    }

    return 0;
}
