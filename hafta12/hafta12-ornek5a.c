/*
Değerleri kullanıcı tarafından girilen
5x5'lik bir matrisin "sütün elemanlarının" toplamını
bulup ekrana yazdırınız.
*/
#include<stdio.h>
int main(){
    int i,j,n=5,toplam;
    int a[n][n];
    int sutuntoplam[n];
    // kullanıcıdan matris elemanlarının alınması
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("matrisini %d. satir, %d. sutun degerini giriniz :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    // matrisin ekrana yazdırılması
    // ve sütun elemanlarinin toplanması
    for(j=0;j<n;j++){
        sutuntoplam[j] = 0;
        for(i=0;i<n;i++){
            printf("%d ",a[j][i]);
            sutuntoplam[j] = sutuntoplam[j] + a[i][j];
        }
        printf("\n");
    }
    printf("----------\n");
    for(i=0;i<n;i++){
        printf("%d ",sutuntoplam[i]);
    }


}
