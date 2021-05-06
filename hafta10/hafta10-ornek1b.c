/*
Kullanıcının girdiği iki sayıdan büyük olanı
bulup ekrana yazdırma (fonksiyon kullanarak)
*/


#include<stdio.h>

//prototip
int buyuk_bul(int, int);

int main(){

    int a,b,c;

    printf("Iki tam sayi giriniz: ");
    scanf("%d%d",&a,&b);
    c = buyuk_bul(a,b);
    printf("Buyuk olan sayi = %d",c);
    return 0;

}// main biter

int buyuk_bul(int x, int y){
    int cevap;
    if(x>y){
        cevap=x;
    }
    else{
        cevap=y;
    }
    return cevap;
} // buyuk_bul fonksiyonu biter
