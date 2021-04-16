/*

Kullanıcı bir miktar pozitif sayı girmektedir.
Girilen sayı negatif ise kullanıcı uyarılacak ve tekrar potitif sayı
girilmesi istenecektir.
Sayı girişinin sonlanması iki şarta bağlıdır. Ya kullanıcı sıfır
değeri girecek ya da girilen sayıların toplamı 100 ya da 100'den daha büyük değere
ulaştığında giriş sonlanacaktır.
Ekrana girilen sayıların toplamı ve doğru girilen sayı miktarı yazılacaktır.
Ayrıca kaç defa negatif sayı girildi, onun da raporu verilecektir.
*/


#include <stdio.h>

int main(){

    int sayi,toplam,sayac_pozitif,sayac_negatif;

    sayi = 9999;
    toplam = 0;
    sayac_pozitif = 0;
    sayac_negatif = 0;

    while(sayi!=0 && toplam<=100){

        printf("Pozitif tam sayi giriniz : ");
        scanf("%d",&sayi);
        if (sayi>0){
            toplam = toplam + sayi;
            sayac_pozitif = sayac_pozitif + 1;
        }
        if(sayi<0){
            printf("Negatif sayi girdiniz bu gecersizdir.\n");
            sayac_negatif = sayac_negatif + 1;
        }
    } // while biter

    if(sayi==0){
        printf("Giris sona ermistir. 0 girerek kendiniz ciktiniz.\n");
    }
    if(toplam>100){
        printf("Giris sona ermistir. toplam 100 degerini asti.. o yuzden cikildi.\n");
    }
    printf("Toplam = %d\n",toplam);
    printf("Girilen pozitif sayi adedi=%d\n",sayac_pozitif);
    printf("Girilen negatif sayi adedi=%d\n",sayac_negatif);




}

/*
Örnek:

Pozitif sayi giriniz: 8
Pozitif sayi giriniz: 7
Pozitif sayi giriniz: 1
Pozitif sayi giriniz: 2
Pozitif sayi giriniz: 45
Pozitif sayi giriniz: -8
Negatif sayı girdiniz bu geçersizdir.
Lütfen pozitif giriniz..
Pozitif sayi giriniz: 9
Pozitif sayi giriniz: 0
Giriş sona ermiştir. 0 girerek kendiniz çıktınız.
Toplam=72
Girilen pozitif sayı adedi=6
Girilen negatif sayı adedi=1


Pozitif sayi giriniz: 8
Pozitif sayi giriniz: 7
Pozitif sayi giriniz: 1
Pozitif sayi giriniz: 2
Pozitif sayi giriniz: 45
Pozitif sayi giriniz: -8
Negatif sayı girdiniz bu geçersizdir.
Lütfen pozitif giriniz..
Pozitif sayi giriniz: 90
Pozitif sayi giriniz: 0
Giriş sona ermiştir. toplam 100'degerini aştı.. o yuzden cıkıldı.
Toplam=xxx
Girilen pozitif sayı adedi=6
Girilen negatif sayı adedi=1



*/






