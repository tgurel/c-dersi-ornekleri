/*
Değerleri kullanıcı tarafından girilen
5x5'lük bir matrisi ekrana "matris
formunda" yazdırınız.
*/
#include<stdio.h>
int main(){
    int i,j,n=5;
    int a[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("matrisini %d. satir, %d. sutun degerini giriniz :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
