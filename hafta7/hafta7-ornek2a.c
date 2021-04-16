/*

Kullanıcının girdiği pozitif sayıların toplamını
ekrana yazan program.
Not1: Kullanıcı kaç tane sayı girecek bilinmiyor.
Not2: Kullanıcı "sıfır" veya "negatif tam sayı" girdiğinde
sayı girişi bitecek ve toplam ekrana yazdırılacak.

Not3: do..while() ile yapılacaktır.

*/


#include <stdio.h>

int main(){

    int sayi,toplam;


    toplam=0;

    do{
        printf("Pozitif tam sayi giriniz : ");
        scanf("%d",&sayi);
        if (sayi>0){
            toplam = toplam + sayi;
        }
    }while(sayi>0);
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






