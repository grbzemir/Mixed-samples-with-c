#include<stdio.h>
#include<stdlib.h>

int main () 
{

    int gun,ay,yil,egun,eyil,eay;

    eyil=2003;

    eay=1;

    egun=6;

    printf("gun:");

    scanf("%d",&gun);

    printf("ay:");

    scanf("%d",&ay);

    printf("yil:");

    scanf("%d",&yil);

    if (gun>egun)

    {
        egun=egun+30;

        eay=eay-1;

    }

    if (ay>eay)

    {
        eay=eay+12;

        eyil=eyil-1;

    }

    printf("gun:%d)",egun-gun);

    printf("ay:%d)",eay-ay);

    printf("yil:%d)",eyil-yil);



    return 0;
    
}