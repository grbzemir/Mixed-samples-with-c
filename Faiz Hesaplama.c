#include<stdio.h>
#include<stdlib.h>

int main ()
{


int anapara;
int oran;
int yil;
int bilesikfaiz;
int secim;

printf("************FAIZ HESAPLAMA************\n");
printf(" 1- yillik faiz hesaplama\n");
printf(" 2- aylik faiz hesaplama\n");
printf(" 3- gunluk faiz hesaplama\n");
printf(" 4- saatlik faiz hesaplama\n");
printf(" 5- dakikalik faiz hesaplama\n");
printf("************FAIZ HESAPLAMA************\n");
printf("seciminizi yapiniz: ");
scanf("%d",&secim);



system("color 0a");
printf("anapara giriniz: ");
scanf("%d",&anapara);
printf("oran giriniz: ");
scanf("%d",&oran);
printf("yil giriniz: ");
scanf("%d",&yil);



bilesikfaiz=anapara*oran*yil/100;
printf("bilesik faiz: %d",bilesikfaiz);



return 0;
}
