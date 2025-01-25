#include <stdio.h>
#include <stdlib.h>
int palindromyapici(int sayi){
    int j=1,rakam,cikansayi=0;
while(sayi>0){
    rakam=sayi%(10*j);
    rakam/=j;
    cikansayi=(cikansayi*10)+rakam;
    sayi=sayi-(rakam*j);
    j*=10;
}
return cikansayi;
}
int main()
{
    int al;
    printf("Palindrom oldugu kontrol edilecek sayiyi giriniz\n=");
    scanf("%d",&al);
    if(al>0){
        printf("iste palindrom hali-->%d\n",palindromyapici(al));
        if(al==palindromyapici(al)){
            printf("girilen sayi palindromdur\n");
        }
    }
    else{
        printf("HATALI GIRIS YAPILDI\n");
    }
    return 0;
}
