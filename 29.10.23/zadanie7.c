#include <stdio.h>


int main()
{
    int dzien;
    int miesiac;
    int rok;
    printf("Podaj dzien z przedzialu 1-31: \n");
    scanf("%d",&dzien);
    printf("Podaj miesiac z przedzialu 1-12: \n");
    scanf("%d",&miesiac);
    printf("Podaj rok: \n");
    scanf("%d",&rok);
     if (dzien>=1 && dzien<=31 || miesiac>=1 && miesiac<=12)
     {
        printf("Data jest prawidłowa %d-%d-%d \n",dzien,miesiac,rok);
     }
     else
     {
        printf("data jest nieprawidłowa \n");
     }
    return 0;
    
}