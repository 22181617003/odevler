#include <stdio.h>
int main()
{
    int ales,yds,mo,islem;
    
    printf("Ales puaninizi giriniz: \n");
    scanf("%d",&ales);

    printf("Yds puaninizi giriniz: \n");
    scanf("%d",&yds);

    printf("Mezuniyet ortalamasini giriniz: \n");
    scanf("%d",&mo);

    islem=(ales/2)+(yds/4)+(mo/4);

    printf("Genel ortalama= %d \n",islem);

    if(islem>=60&&yds>=70)
    {
        printf("Lisans basvurusu yapildi");
    }
    else
    {
        printf("Lisans basvurusu yapilamaz");
    }
    return 0;
}