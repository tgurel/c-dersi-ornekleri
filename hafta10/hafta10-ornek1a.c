/*
Kullanıcının girdiği iki sayıdan büyük olanı
bulup ekrana yazdırma (fonksiyon olmadan)
*/
#include<stdio.h>

int main(){

    int a,b,c;
    printf("Iki tam sayi giriniz: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        c=a;
    }
    else{
        c=b;
    }
    printf("Buyuk olan sayi = %d",c);
    return 0;
}
