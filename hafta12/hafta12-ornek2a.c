/*
Değerleri kullanıcı tarafından girilen
3x3'lük bir matrisi ekrana "matris
formunda" yazdırınız.
*/
#include<stdio.h>
int main(){
    int i,j;
    int a[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("matrisini %d. satir, %d. sutun degerini giriniz :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
