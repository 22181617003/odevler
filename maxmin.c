#include <stdio.h>
int main(){
int d[5],max=0,min;
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
    if(min>d[m]){
        min=d[m];
    }
}
printf("Dizideki en buyuk eleman: %d\n",max);
printf("Dizideki en kucuk eleman: %d",min);
}