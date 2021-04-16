/*

Kullanıcının girdiği pozitif sayıların toplamını ve
toplam kaç tane sayı girdiğini ekrana yazan program.
Not1: Kullanıcı kaç tane sayı girecek bilinmiyor.
Not2: Kullanıcı "sıfır" veya "negatif tam sayı" girdiğinde
sayı girişi bitecek ve toplam ve girlen sayı miktarı ekrana yazdırılacaktır.

*/


#include <stdio.h>

int main(){

    int sayi,toplam,sayac;

    sayi = 9999;
    toplam = 0;
    sayac = 0;
    while(sayi>0){

        printf("Pozitif tam sayi giriniz : ");
        scanf("%d",&sayi);
        if (sayi>0){
            toplam = toplam + sayi;
            sayac = sayac + 1;
        }
    }
    printf("Toplam = %d\n",toplam);
    printf("%d tane sayi girisi olmustur.",sayac);




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






