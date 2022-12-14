#include <stdio.h>
void ortalama(float ort[5],int vize[5],int final[5])
{
    for(int i=0;i<5;i++)
    {
        ort[i]=(vize[i]+final[i])/2;
    }
}
int main()
{
    int vize[5];
    int final[5];
    float ort[5];
    for(int i=0;i<5;i++){
    printf("%d.vize notunuzu giriniz: ",(i+1));
    scanf("%d",&vize[i]);
    }
    for(int i=0;i<5;i++){
    printf("%d.final notunuzu giriniz: ",(i+1));
    scanf("%d",&final[i]);
    }
    ortalama(ort,vize,final);
    for(int i=0;i<5;i++){
        printf("%d. notunuz: %.0f\n",(i+1),ort[i]);
    }    
    return 0;
}