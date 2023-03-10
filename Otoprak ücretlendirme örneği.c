#include<stdio.h>
#include<stdlib.h>

int main () {
   int saat;
    float ucret;
    printf("saat giriniz:");
    scanf("%d",&saat);

    if (saat>0 && saat<4)
    {
        printf("10 tl odeme alınacak:");
    }
    if(saat >=5 && saat <=8)
    {
        printf("20 tl odeme alınacak:");
    }
    if(saat >=9 && saat <=12)
    {
        printf("30 tl odeme alınacak:");
    }
    if(saat >=13 && saat <=16)
    {
        printf("40 tl odeme alınacak:");
    }   
    return 0;
}