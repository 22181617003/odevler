#include <stdio.h>
int main(){
int d[5],max=0,ibd=0;
for(int m=0;m<5;m++){
    printf("%d. sayiyi giriniz:",(m+1));
    scanf("%d",&d[m]);
}
for(int m=0;m<5;m++){
    if(max<d[m]){
        max=d[m];
    }
}
for(int m=0;m<5;m++){
    if(ibd<=d[m]&&d[m]!=max){
        ibd=d[m];
    }
}
printf("Ikinci buyuk deger: %d",ibd);
}