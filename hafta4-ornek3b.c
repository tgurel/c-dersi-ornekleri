/*
Kullan�c�dan 1-7 aras� say� isteyin.
Yazaca��n�z kod, ilgili say�n�n, haftan�n
hangi g�n�ne ait oldu�unu ekrana yazd�rs�n,
ayr�ca o g�n hafta sonu mu onu da yazd�rs�n.
Sayi giriniz: 5
Cuma
Hafta i�i
Sayi giriniz: 6
Cumartesi
Hafta sonu
Sayi giriniz: 8
Hatal� de�er girdiniz.
Sayi giriniz: -3
Hatal� de�er girdiniz.
*/

// versiyon 1 pztesi sal� car� yazsin.
// versiyon 2 ekstradan hafta i�i hafta sonu yazs�n
// versiyon 3 hatal� giri� i�in uyar� versin

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
