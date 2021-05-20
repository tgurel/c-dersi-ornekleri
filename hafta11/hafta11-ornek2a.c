/*
Kullanıcının girdiği minimum ve maksimum
iki sayı arasındaki asal sayıları ekrana yazan program
*/
#include<stdio.h>

/* prototip */
int veri_al(void);
void asalSayiBul(int,int);
int asalMi(int);

int main(){
    int min,max;
    min=veri_al();
    max=veri_al();
    asalSayiBul(min,max);
	return 0;
}

int asalMi(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
asalSayiBul(int a, int b){
    int i,sonuc;
    // örneğin a=10,b=100
    for(i=a;i<=b;i++){
        sonuc=asalMi(i); // asalmi fonksiyonu 0 ya da 1 döndürecek
        // 1 ise asal 0 ise asal değil anlamına gelmektedir.
        if (sonuc==1){
            printf("%d ",i);
        }
    }
}
int veri_al(void){
    int sayi;
    printf("Bir tam sayi giriniz: ");
    scanf("%d",&sayi);
    return sayi;
}
