/*
Tüm basamaklarındaki rakamların sayı değerlerinin küpleri toplamı,
kendisine eşit olan sayılara "Armstrong sayı"denir.

Örnek:
371=3^3+7^3+1^3=27+343+1=371

Kullanıcının girdiği bir tam sayıya kadar olan sayılardan
Armstrong sayı olanları bir fonksiyon içerisinde bulup ekrana
yazan bir kod yazınız.


*/
#include<stdio.h>

/* prototip */
int veri_al(void);
void armstrongSayiBul(int);

int main(){
    int n;
    n=veri_al();
    armstrongSayiBul(n);
	return 0;
}

void armstrongSayiBul(int n){ // örneğin n=1000 olarak geldi..
    int i,bolen,toplam,kalan,rakam;
    for(i=0;i<=n;i++){
        //i sayısı kaç haneli bir sayıdır?
        //371
        //i=n;
        bolen=10;
        toplam=0;
        kalan=-99;
        while(i>kalan){
            rakam=(i%bolen-i%(bolen/10))/(bolen/10);
            kalan=i%bolen;
            //printf("bu sayinin rakamlari=%d\n",rakam);
            toplam=toplam+rakam*rakam*rakam;
            bolen=bolen*10;
        }
        if (toplam==i){
            printf("%d sayisi bir Armstrong sayisidir...\n",i);
        }

    }
}



int veri_al(void){
    int sayi;
    printf("Bir tam sayi giriniz: ");
    scanf("%d",&sayi);
    return sayi;
}
