#include<stdint.h>
#include<stdio.h>

int main () {
  int saat;
  printf("kac saat kaldiniz:");
  scanf("%d",&saat);
switch(saat)
{
  case 1: 0-3;
  printf("10 tl odeme alinacak:");
  break;
  case 2: 3-5;
  printf("20 tl odeme alinacak:");
  break;
  case 3: 5-8;
  printf("30 tl odeme alinacak:");
  break;
  case 4: 8-15;
  printf("40 tl odeme alinacak:");
  break;
  default:
  printf("yanliş giriş yaptiniz:");
  break;
}
  return 0;
}