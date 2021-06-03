/*dizi elemanlarini hesapla adli
fonksiyonda topla, sonucu main'de yazdir.*/

int hesapla(int[], int);
#include <stdio.h>
int main(){

    int a[5]={4,8,2,1,7};
    int toplam;
    toplam = hesapla(a,5);
    printf("Dizi toplami = %d",toplam);
    return 0;
}
int hesapla(int b[], int boyut){
    int i,toplam=0;
    for(i=0;i<boyut;i++){
        toplam += b[i];
    }
    return toplam;
}
