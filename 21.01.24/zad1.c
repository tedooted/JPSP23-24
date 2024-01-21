#include <stdio.h>

int main()
{
    FILE *plik;
    char linia[100];
    plik = fopen("plik.txt","r");
    
    if(plik == NULL)
    {
        printf("Nie udało się otworzyć pliku.\n");
        return 1;
    }
    else
    {
        fgets(linia,100,plik);
        printf("%s",linia);
    }
    fclose(plik);
    return 0;
}