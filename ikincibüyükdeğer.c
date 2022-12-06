#include <stdio.h>
int toplam=0;
int ortalama(int d[5])
{
    for(int m=0;m<5;m++){
        toplam=toplam+d[m];
    }
    return toplam/5;
}
int main(){
    int d[5],bd,t;
    for(int m=0;m<5;m++){
        printf("%d.degeri giriniz: ",(m+1));
        scanf("%d",&d[m]);
    }
    printf("ortalama: %d",ortalama(d));
    for(int m=0;m<5;m++){
        if(d[m]>ortalama(d)){
            bd=d[m];
            printf("\nortalamadan buyuk deger: %d",bd);
        }
    }
    
}