#include <stdio.h>
float toplam=0;
float ortalama(int d[5])
{
    for(int m=0;m<5;m++){
        toplam=toplam+d[m];
    }
    return toplam/5;
}
int main(){
    int d[5];
  for(int i=0;i<5;i++){
    printf("%d .notunuzu giriniz: ",(i+1));
    scanf("%d",&d[i]);
  }
  printf("ortalamaniz: %.3f",ortalama(d));
}