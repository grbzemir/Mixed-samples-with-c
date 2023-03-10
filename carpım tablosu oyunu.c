#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int main () {

int i,soru_sayisi,cevap,dogrusayisi=0,yanlissayisi=0,puan=0;
printf("oyunda kaç soru olucak:");
scanf("%d",&soru_sayisi);

for(i=1;i<= soru_sayisi; i++);
{

int sayi1,sayi2;
srand(time(NULL));  // random sayı üretmek için
sayi1=rand () % (10-1)+1;
sayi2=rand () % (10-1)+1;

printf("%d \n",sayi1);
printf("%d \n",sayi2);
printf("%d x %d =   ?\n",sayi1,sayi2,sayi1*sayi2);
printf("lütfen cevabinizi giriniz\n");
scanf("%d",&cevap);

if(cevap==sayi1*sayi2)
{
    dogrusayisi++;
    puan=puan+10;
    printf("dogru cevap verdiniz\n");
    scanf("%d",dogrusayisi);

}
else
{    
    puan=puan-1;
    printf("yanlis cevap verdiniz!!\n");
    yanlissayisi++;
    scanf("%d",yanlissayisi);

}
}

   system("cls");

return 0;
}



