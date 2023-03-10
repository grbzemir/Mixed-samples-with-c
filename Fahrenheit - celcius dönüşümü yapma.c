#include<stdio.h>
#include<stdlib.h>

float celciusToFahrenheit(float deger)
{
    float fahrenheit;
    fahrenheit = (deger * 9 / 5) + 32;
    return fahrenheit;
}

float fahrenheitToCelcius(float deger)
{
    float celcius;
    celcius = (deger - 32) * 5 / 9;
    return celcius;
}



int main ()
{
    int secim;
    float deger;

    system("color 74");
    printf("lutfen bir secim yapiniz: \n");
    printf("------------------------\n");
    printf("1. Celcius -> Fahrenheit Cevirmek icin 1 e basiniz:\n");
    printf("2. Fahrenheit -> Celcius Cevirmek icin 2 ye basiniz:\n");
    printf("------------------------\n");
    printf("yaptiginiz secim: ");
    scanf("%d",&secim);
    printf("lutfen bir deger giriniz: ");
    scanf("%f",&deger);


   switch(secim)
   {
    case 1:
    printf(" \n\n Celcius -> Fahrenheit: %f",deger,celciusToFahrenheit(deger));
    break;

    case 2: 
    printf(" \n\n Fahrenheit -> Celcius: %f",deger,fahrenheitToCelcius(deger));
    break;

    default:
    printf("malesef yanlıs bir secim yaptiniz: !");
    }

    return 0;
}