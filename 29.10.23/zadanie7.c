#include <stdio.h>
#include <math.h>

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
     if ((dzien>=1||dzien<=31)&&(miesiac>=1||miesiac<=12))
     {
        printf("Data jest prawidłowa %d-%d-%d",dzien,miesiac,rok);
     }
     else
     {
        printf("data jest nieprawidłowa");
     }
    return 0;
    
}