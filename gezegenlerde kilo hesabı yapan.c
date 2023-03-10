#include<stdio.h>
#include<stdlib.h>

 int main()
 
 {


    float kg,merkur,venus,ay,mars,jupiter;
    system("color e0");
    printf(" >> Diger Gezegenlerdeki kilonuzu ogrenin <<");
    printf("\n\n kilonuz:");
    scanf("%f",&kg);
    merkur=kg*0.378;
    venus=kg*0.907;
    ay=kg*0.166;
    mars=kg*0.377;
    jupiter=kg*2.364;
    printf("\n\n    Merkurdeki Kilonuz -->> %.1f",merkur);
    printf("\n\n    Venusteki Kilonuz -->> %.1f",venus);
    printf("\n\n    Aydaki Kilonuz -->> %.1f",ay);
    printf("\n\n    Marsdaki Kilonuz -->> %.1f",mars);
    printf("\n\n    Jupiterdeki Kilonuz -->> %.1f",jupiter);

    return 0;
    
 }
 