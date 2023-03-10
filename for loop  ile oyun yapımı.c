#include<stdio.h>
#include<stdlib.h>

int main () {

int a,b,cevap,dogru=0,yanlis=0,puan=0;

system("color 0a");
printf("matematik oyununa hosgeldiniz\n");
printf("10 soru sorulacak ve her soru 10 puan\n");
printf("yanlis cevap verdiginizde 1 puan eksilir\n");
printf("baslamak icin bir tusa basiniz\n");
system("pause");

for(a=1;a<=10;a++) 
{
for(b=1;b<=10;b++)
{
printf("%d x %d =   ?\n",a,b,a*b);
printf("lütfen cevabinizi giriniz\n");
scanf("%d",&cevap);
if(cevap==a*b)
{
    dogru++;
    puan=puan+10;
    printf("dogru cevap verdiniz\n");
    printf("puaniniz:%d\n: Dogru:%d Yanlis:%d",puan,dogru,yanlis);
}
else
{    
    puan=puan-1;
    printf("yanlis cevap verdiniz!!\n");

}
}
}


system("pause");
    return 0;
}
