#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

/* Bir teleferik hattının iki kulesi arasındaki uzaklık 1000metredir
hattım tam ortasında bir orta kule vardır
başlangıç kuleye 1, orta kuleye 2, bitiş kuleye 3 diye numaralandırılmıştır
vagonun hat üzerinde,başlangıca göre bulunduğu konum klavyeden giriliyor.

vagonun hangi kuleye daha yakın olduğunu ve o anki hızını bulan c programı yazınız.

hiz=2.425+0.00175*uzaklik*uzaklık;

*/

int main () 
{
    int konum;
    float hiz;
    int uzaklik;
     
    system("color 0a");
    printf("lutfen vagonun konumunu giriniz: \n");
    scanf("%d", &konum);

    if(konum<=250)
    uzaklik=konum;
    else if(konum<=500)
    uzaklik=500-konum;
    else if(konum<=750)
    uzaklik=konum-500;
    else if(konum<=1000)
    uzaklik=1000-konum;

    printf("vagonun en yakin kuleye olan uzakligi: %d", uzaklik);

    hiz=2.425+0.00175*uzaklik*uzaklik;

    if(uzaklik<=250)
    {
       printf("1.kuleye daha yakin");
    }
    else if(uzaklik<=500)
    {
        printf("2.kuleye daha yakin");
    }
    else if(uzaklik<=750)
    {
        printf("3.kuleye daha yakin");
    }
    else if(uzaklik<=1000)
    {
        printf("4.kuleye daha yakin");
    }

    printf("vagonun hizi: %f", hiz);

return 0;
}













