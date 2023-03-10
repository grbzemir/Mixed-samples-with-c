#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include <ctype.h>
#define n 100

typedef  struct 
{
    char ilacadi[10];
    int fiyat;
    int adet;
}data;


int main ()
{
  data veriler[n];
  int i;

  for(i=0;i<n;i++)
  {
    fflush(stdin); // çıkış aygıtlarını yazar
    printf("ilac adi giriniz: ");
    gets(veriler[i].ilacadi);
    printf("ilac fiyati giriniz: ");
    scanf("%d",&veriler[i].fiyat);
    printf("ilac adeti giriniz: ");
    scanf("%d",&veriler[i].adet);
    printf("\n\n");


    }

    printf("ilac adi \n");
    printf("---------------------------\n");
    for(i=0;i<n;i++)
    if(veriler[i].adet<=10)
    {
        printf("%s \n",veriler[i].ilacadi);
    
}


return 0;
}