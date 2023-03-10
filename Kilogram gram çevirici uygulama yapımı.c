#include<stdio.h>
#include<stdlib.h>


int main () {


 int secim;
 double x;
    
    printf("*************************************************\n");
    printf("KİLOGRAM GRAM ÇEVİRİCİ UYGULAMASINA HOŞ GELDİNİZ");
    printf("BU UYGULAMA SİZE HER KONUDA RAHATLIK SAGLİCAKTIR");
    printf("BU UYGULAMADA KİLOGRAM GRAM ÇEVİRİCİSİNİ KULLANABİLİRSİNİZ");
    printf("*************************************************\n");

    printf("lütfen seciminizi yapiniz:");
    printf("1.gramdan kilograma cevirme");
    printf("2.kilogramdan gram'a cevirme");

    scanf("%d",&secim);
    
    if(secim==1)
    {
        printf("lütfen kilogram miktarini giriniz:");
        scanf("%lf",&x);
        printf("%lf kilogram = %.2lf gram",x,x*1000);
    }
    else if (secim==2)
   {
    printf("lütfen gram miktarini giriniz:");
    scanf("%lf",&x);
    printf("%lf gram = %.2lf kilogram",x,x/1000);
    }
    else
    {
        printf("yanlis secim yaptiniz");
    }

return 0;
}

