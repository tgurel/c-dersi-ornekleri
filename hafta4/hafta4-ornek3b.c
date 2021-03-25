/*
Kullanıcıdan 1-7 arası sayı isteyin.
Yazacağınız kod, ilgili sayının, haftanın
hangi gününe ait olduğunu ekrana yazdırsın,
ayrıca o gün hafta sonu mu onu da yazdırsın.
Sayi giriniz: 5
Cuma
Hafta içi
Sayi giriniz: 6
Cumartesi
Hafta sonu
Sayi giriniz: 8
Hatalı değer girdiniz.
Sayi giriniz: -3
Hatalı değer girdiniz.
*/

// versiyon 1 pztesi salı carş yazsin.
// versiyon 2 ekstradan hafta içi hafta sonu yazsın
// versiyon 3 hatalı giriş için uyarı versin

#include<stdio.h>
int main(){
    int sayi;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

    if (sayi>0 && sayi<8){ // eger sayi sifirdan buyuk ve (ayni zamanda) sayi 8 den kucuk ise
        // bu bolge kullanicinin dogru giris yaptigi bolgedir.

        if(sayi==1){ printf("Pazartesi");}
        else if(sayi==2){ printf("Sali");}
        else if(sayi==3){ printf("Carsamba");}
        else if(sayi==4){ printf("Persembe");}
        else if(sayi==5){ printf("Cuma");}
        else if(sayi==6){ printf("Cumartesi");}
        else if(sayi==7){ printf("Pazar");}

        /*
        // cok kafaniz karismis ise asagidaki kod da dogru calisir..

        if(sayi==1){ printf("Pazartesi");}
        if(sayi==2){ printf("Sali");}
        if(sayi==3){ printf("Carsamba");}
        if(sayi==4){ printf("Persembe");}
        if(sayi==5){ printf("Cuma");}

        // yukaridaki gibi de yazilabilir asagidaki gibi de...

        if(sayi==6){
            printf("Cumartesi");
        }

        if(sayi==7){
            printf("Pazar");
        }

        */
        //bu bolgede sayinin degeri 1-7 arasindadir (bakiniz satir no 9)
        if (sayi<=5){
                printf("\nHafta ici");
        }
        else{
            printf("\nHafta sonu");
        }
    } // sinir kontrolu yapan if'in true kismi biter
    else{
        // bu bolge kullanicinin hatali giris yaptigi bolgedir.
        printf("Hatali deger girdiniz!!");
    } // sinir kontrolu yapan if in false(yani else) kismi biter

    return 0;
}
