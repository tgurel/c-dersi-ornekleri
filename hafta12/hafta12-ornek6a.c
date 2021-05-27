/*
Değerleri kullanıcı tarafından girilen
5x5'lik bir matrisin köşegen elemanları toplamını bulup ekrana
yazdırınız.
*/
#include<stdio.h>
int main(){
    int i,j,n=3,toplam;
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
    // matrisin köşegen elemanlarının toplamının bulunması
    toplam=0;
    for(i=0;i<n;i++){
        toplam = toplam + a[i][i];
    }
    printf("Bu matrisin kosegen elemanlari toplami = %d",toplam);
}
