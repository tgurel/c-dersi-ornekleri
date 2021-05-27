/*
Değerleri kullanıcı tarafından girilen
5x5'lik bir matrisin elemanları toplamını bulup ekrana
yazdırınız.
*/
#include<stdio.h>
int main(){
    int i,j,n=5,toplam;
    int a[n][n];
    // kullanıcıdan matris elemanlarının alınması
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("matrisini %d. satir, %d. sutun degerini giriniz :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    // matrisin ekrana yazdırılması
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    // matrisin elemanlarının toplamının bulunması
    toplam=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            toplam = toplam + a[i][j];
        }
    }
    printf("Bu matrisin elemanlari toplami = %d",toplam);
}
