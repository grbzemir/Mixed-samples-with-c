#include<stdio.h>
#include<stdlib.h>

//  sayı 3’e bölünüyor ise Fizz, sayı 5’e bölünüyorsa Buzz, hem 3’e hem 5’e bölünüyorsa FizzBuzz yazdırıyoruz.

int main (void)
{


int i;

for(i=1;i<=100;i++)
{
    if(i%15==0)
    {
        printf("FizzBuzz");

    }

    else if(i%3==0)
    {
        printf("Fizz");

    }

    else if(i%5==0)
    {
        printf("Buzz");

    }

    else
    {
        printf("%d",i);
    }

    system("color 0a");
    printf("\n");

}





    return 0;
}