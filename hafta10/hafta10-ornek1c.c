/*
Kullanıcının girdiği iki sayıdan büyük olanı
bulup ekrana yazdırma (fonksiyon kullanarak)
Ayrıca veri girişi ve sonuçların ekrana yazdırılması da
fonksiyon kullanarak yapılacaktır.
*/

#include<stdio.h>

//prototip
int veri_al(void);
void sonuc_yazdir(int);
int buyuk_bul(int, int);

int main(){
    int a,b,c;
    a = veri_al(); //örn: 89
    b = veri_al(); //Örn: 44
    c = buyuk_bul(a,b); // c=89
    sonuc_yazdir(c);
    return 0;

}// main biter

void sonuc_yazdir(int c){
    printf("Buyuk olan sayi= %d",c);
}

int veri_al(void){
    int sayi;
    printf("Bir tam sayi giriniz: ");
    scanf("%d",&sayi);
    return sayi;
}

int buyuk_bul(int x, int y){
    int cevap;
    if(x>y){
        cevap=x;
    }
    else{
        cevap=y;
    }
    return cevap;
}
