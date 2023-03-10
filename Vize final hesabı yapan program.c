#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int vize1,vize2,final;
    double okulortalama;
    double dersort;
    printf("vize1 notunuzu giriniz:");
    scanf("%d",&vize1);
    printf("vize2 notunuzu giriniz:");
    scanf("%d",&vize2);
    printf("final notunuzu giriniz:");
    scanf("%d",&final);
    okulortalama=(vize1+vize2)/2;
    dersort=(okulortalama*0.4)+(final*0.6);
    printf("ders ortalamasi:%f",dersort);
    if(dersort>=90)
    {
        printf("harf notunuz AA");
    }
    else if(dersort>=85)
    {
        printf("harf notunuz BA");
    }
    else if(dersort>=80)
    {
        printf("harf notunuz BB");
    }
    else if(dersort>=75)
    {
        printf("harf notunuz CB");
    }
    else if(dersort>=70)
    {
        printf("harf notunuz CC");
    }
    else if(dersort>=65)
    {
        printf("harf notunuz DC");
    }
    else if(dersort>=60)
    {
        printf("harf notunuz DD");
    }
    else if(dersort>=55)
    {
        printf("harf notunuz FD");
    }
    else
    {
        printf("harf notunuz FF");
    }
    return 0;
}