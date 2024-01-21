#include <stdio.h>

    struct osoba
    {
        char Imie[20];
        char Nazwisko[20];
        int numer_telefonu;
    };
    
    int main()
    {
        struct osoba osoba1 = {"Jan", "Kowalski", 25};
        struct osoba osoba2 = {"Barbara", "Wisniewska", 22};

        printf("Imie: %s\n",osoba1.Imie);
        printf("Nazwisko: %s\n",osoba1.Nazwisko);
        printf("Numer: %d\n",osoba1.numer_telefonu);
        printf("Imie: %s\n",osoba2.Imie);
        printf("Nazwisko: %s\n",osoba2.Nazwisko);
        printf("Numer: %d\n",osoba2.numer_telefonu);
        return 0;
    }