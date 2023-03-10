#include<stdio.h>
#include<stdlib.h>

int main () {
    int islem;
    int bakiye=1000;
    int tutar;

    printf("islemler:");
    printf("1.para yatirma:");
    printf("2.para cekme:");
    printf("3.havale yapma:");
    printf("4.kart iade:");
    printf("islem seciniz:");
    scanf("%d",&islem);

    switch(islem)
    {
    case 1:
    printf("bakiyeniz: %d\n",bakiye);
    printf("cekilebilcek tutar:");
    scanf("%d",&tutar);
    if(tutar>bakiye)
    {
    printf("bakiye yetersiz");
    }
    bakiye -= tutar;
    printf("yeni bakiyeniz:%d",bakiye);
    break;

    case 2:
    printf("bakiyeniz: %d\n",bakiye);
    printf("yatirilacak tutar:");
    scanf("%d",&tutar);
    bakiye += tutar;
    printf("yeni bakiyeniz:%d",bakiye);
    break;

    case 3:
    printf("bakiyeniz: %d\n",bakiye);
    printf("havale yapilacak tutar:");
    scanf("%d",&tutar);
    if(tutar>bakiye)
    {
    printf("bakiye yetersiz");
    }
    bakiye -= tutar;
    printf("yeni bakiyeniz:%d",bakiye);
    break;

    case 4:
    printf("kart iade ediliyor...");
    break;

    default:
    printf("lütfen tekrar deneyiniz:");
    break;
    }
    return 0;
}

