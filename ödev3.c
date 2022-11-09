#include <stdio.h>
int main()
{
    int sira, a, b, ys=1, bs;   
    printf("Sira Giriniz: ");
    scanf("%d", &sira);
    bs = sira - 1;
    for(a=0; a<sira; a++)
    {
        for(b=0; b<bs; b++)
            printf(" ");
        for(b=0; b<ys; b++)
            printf("*");    
        printf("\n");
        ys+=2;
        bs--;
    }   
    return 0;
}