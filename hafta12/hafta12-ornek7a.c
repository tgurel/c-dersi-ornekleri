/*
Boyutu ve değerleri kullanıcı tarafından girilen
bir matrisin elemanları toplamını bulup ekrana
yazdırınız.
*/
#include<stdio.h>
int main(){
    int i,j,n,m,toplam;

    printf("Matrisinizin satir sayisini giriniz : ");
    scanf("%d",&n);
    printf("Matrisinizin sutun sayisini giriniz : ");
    scanf("%d",&m);

    int a[n][n];
    // kullanıcıdan matris elemanlarının alınması
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("matrisini %d. satir, %d. sutun degerini giriniz :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    // matrisin ekrana yazdırılması
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    // matrisin elemanlarının toplamının bulunması
    toplam=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            toplam = toplam + a[i][j];
        }
    }
    printf("Bu matrisin elemanlari toplami = %d",toplam);
}
