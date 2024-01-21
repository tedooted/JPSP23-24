#include <stdio.h>

void funkcja(char j,char* w1,char* w2,char* w3)
{
    if(j==*w1)
    {
        printf("Odpowiada");
        *w1=*w1+1;
    }
    else if(j==*w2)
    {
        printf("Odpowiada");
        *w2=*w2+1;
    }
    else if(j==*w3)
    {
        printf("Odpowiada");
        *w3=*w3+1;
    }
}


int main()
{
    char j;
    char ile_a=1;
    char ile_b=2;
    char ile_c=3;
    char *w1=&ile_a;
    char *w2=&ile_b;
    char *w3=&ile_c;
    funkcja(j,w1,w2,w3);
}