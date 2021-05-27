/*
Değerleri kullanıcı tarafından girilen
5x5'lik bir matrisin "satır elemanlarının" toplamını
bulup ekrana yazdırınız.
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
    // ve satir elemanlarinin toplanması
    for(i=0;i<n;i++){
        toplam=0;
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
            toplam = toplam + a[i][j];
        }
        printf("= %d\n",toplam);
    }

}
