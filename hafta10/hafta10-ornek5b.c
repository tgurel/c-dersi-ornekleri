/*
Kullanıcı girdiği bir n tam sayisina göre
n'inci Fibonacci sayisini fonksiyon içinde bulup ekrana yazan program.
(Sayıyı bulma islemi fonksiyon içinde yapilacaktir.)
(Kullanıcı hatalarina karsi onlem aliniz..)

1 2 3 4 5 6 7  8  9 10 11 12
0 1 1 2 3 5 8 13 21 34 55 89 ...

*/
#include<stdio.h>

/* prototip */
void program_giris_mesaji(void);
int fibo_eleman_bul(int);
int veri_al(void);


int main(){
    int n;
    int sonuc;
    program_giris_mesaji();
    n=veri_al();
    sonuc = fibo_eleman_bul(n);
    printf("%d. Fibonacci elemani %d sayisidir..",n,sonuc);
	return 0;
}

void program_giris_mesaji(void){
    printf("=========================\n");
    printf("=== CORLU YAZILIM EVI ===\n");
    printf("=== ***** SUNAR ***** ===\n");
    printf("=========================\n");
    printf("Fibonacci serisinin n. elemanini bulmak icin lutfen\n");
}

int fibo_eleman_bul(int n){
    int i;
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
    return s3;
}

int veri_al(void){
    int sayi=-9999;

    while(sayi<=0 || sayi>47){
        printf("bir tam sayi giriniz: ");
        scanf("%d",&sayi);
        if(sayi<=0 || sayi>47){
            printf("Lutfen sifirdan farkli ve 47'den kucuk pozitif bir sayi giriniz (en cok 47 girebilirsiniz):\n");
        }
    }
    return sayi;
}
