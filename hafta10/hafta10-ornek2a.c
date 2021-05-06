/*
Kullanicinin girdigi bir tam sayinin
kac boleni oldugunu bir fonksiyon
içinde bulan bir C kodu yaziniz.
*/

#include<stdio.h>

int main(){
    int sayi,bolen_sayisi;
    printf("Tam sayi giriniz: ");
    scanf("%d",&sayi);
    bolen_sayisi = bolenBul(sayi);
    printf("\nBu sayinin %d tane boleni vardir... ",bolen_sayisi);
    return 0;
}// main biter

int bolenBul(int n){
    int i,sayac=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            printf("%d ",i);
            sayac++;
        }
    }
    return sayac;
}// bolenBul fonk. biter








