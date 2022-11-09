#include <stdio.h>
int main()
{
    int kilo,vki;
    float boy;
    printf("Kilonuzu giriniz: \n");
    scanf("%d",&kilo);
    printf("Boyunuzu metre cinsinden giriniz: \n");
    scanf("%f",&boy);
    vki=kilo/(boy*boy);
    printf("Vücut kitle endeksiniz: %d \n",vki);
    if(vki<=18.5)
    {
        printf("Zayif");
    }
    if(vki<=24.9&&vki>18.5)
    {
        printf("Normal");
    }
    if(vki<=29.9&&vki>=25)
    {
        printf("Kilolu");
    }
    if(30<vki)
    {
        printf("Obez");
    }
    return 0;
}