#include <stdio.h>
int main()
{
    int i,j,sharp=1,sira;
    printf("Sira sayisi giriniz: ");
    scanf("%d",&sira);
    for(j=0;j<sira;j++){
    for(i=0;i<sharp;i++){
    printf("#");
    }
    printf("\n");
    sharp++;
    }
}
