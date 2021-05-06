/*
Kullanıcı girdiği bir n tam sayisina göre
n'inci Fibonacci sayisini fonksiyon içinde bulup ekrana yazan program.
(Sayıyı bulma islemi fonksiyon içinde yapilacaktir.)

1 2 3 4 5 6 7  8  9 10 11 12
0 1 1 2 3 5 8 13 21 34 55 89 ...

*/
#include<stdio.h>


/* prototip */

int main(){
    int n,sonuc;
    n=veri_al();
    sonuc = fibo_eleman_bul(n);
    printf("%d. Fibonacci elamani %d sayisidir..",n,sonuc);

	return 0;
}

int fibo_eleman_bul(int n){
    int i,sayac;
    /*for ile yapilan*/
    int s1=0;
    int s2=1;
    int s3;
    for(i=3;i<=n;i++){
        s3=s1+s2;
        s1=s2;
        s2=s3;
    }
    if(n==1){return s1;} //ÖNEMLİ: return çalıştıktan sonra fonksiyon sona erer.
    if(n==2){return s2;} // Diğer satırlar çalışmaz..
    if (n<=0){return -1;}
    return s3;

}

int veri_al(void){
    int sayi;
    printf("Bir tam sayi giriniz: ");
    scanf("%d",&sayi);
    return sayi;
}










