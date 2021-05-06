/*
 main fonksiyonu içerisinde girilen 10 tane tam sayının
 pozitif mi yoksa negatif mi olduğunu
 fonksiyon kullanarak bulan ve ekrana yazdıran
 bir C kodu yazınız  (fonksiyon adı isaretBul)
*/
#include<stdio.h>


/* prototip */
int isaretBul(int);


int main(){
    int sayi,i,sonuc;

    for(i=1;i<=10;i++){
        printf("Tam sayi giriniz:");
        scanf("%d",&sayi);
        sonuc = isaretBul(sayi); /*pozitif ise 0 negatif ise 1 dondurur*/
        if(sonuc==0){
            printf("POZITIF sayi girdiniz..\n");
        }
        else{
            printf("NEGATIF sayi girdiniz..\n");
        }
    }
	return 0;
}

int isaretBul(int a){
    if (a<0){
        return 1;
    }
    else{
        return 0;
    }
}
