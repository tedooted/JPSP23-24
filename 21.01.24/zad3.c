#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *plik;
    char linia[100];
    plik = fopen("plik.txt","r");
    plik = fopen("plik.txt","w");
    
    if(plik == NULL)
    {
        printf("Nie udało się otworzyć pliku.\n");
        return 1;
    }
    else
    {
        while((linia == fgetc(plik)) != EOF)
        {
            linia=tolower(linia);
            fputc(linia,plik);
        }
    }
    fclose(plik);
    fclose(plik);
    return 0;
}