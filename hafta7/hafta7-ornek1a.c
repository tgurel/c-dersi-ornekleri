/*

Kullanıcının girdiği pozitif sayıların toplamını
ekrana yazan program.
Not1: Kullanıcı kaç tane sayı girecek bilinmiyor.
Not2: Kullanıcı "sıfır" veya "negatif tam sayı" girdiğinde
sayı girişi bitecek ve toplam ekrana yazdırılacak.

*/


#include <stdio.h>

int main(){

    int sayi,toplam;

    // yöntem 1
    // kullanıcı 1. sayısını döngüden önce girsin.
    toplam=0;
    printf("Pozitif tam sayi giriniz : ");
    scanf("%d",&sayi);
    if (sayi>0){
        toplam = toplam + sayi;
    }

    while(sayi>0){

        printf("Pozitif tam sayi giriniz : ");
        scanf("%d",&sayi);
        if (sayi>0){
            toplam = toplam + sayi;
        }
    }
    printf("Toplam = %d",toplam);
    return 0;
}

/*
Örnek:

Pozitif sayi giriniz: 89
Pozitif sayi giriniz: 76
Pozitif sayi giriniz: 12
Pozitif sayi giriniz: 22
Pozitif sayi giriniz: 45
Pozitif sayi giriniz: 236
Pozitif sayi giriniz: -8 // nöbetçi değer.. (sentinel value)



*/






