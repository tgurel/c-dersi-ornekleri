/*
Değerleri kullanıcı tarafından girilen
3x3'lük bir matrisi ekrana "matris
formunda" yazdırınız.
*/
#include<stdio.h>
int main(){
    int i,j;
    int a[3][3];

    // dongu olmazsa boyle yazmak zorundayiz
    printf("matrisini 1. satir, 1. sutun degerini giriniz :");
    scanf("%d",&a[0][0]);
    printf("matrisini 1. satir, 2. sutun degerini giriniz :");
    scanf("%d",&a[0][1]);
    printf("matrisini 1. satir, 3. sutun degerini giriniz :");
    scanf("%d",&a[0][2]);
    printf("matrisini 2. satir, 1. sutun degerini giriniz :");
    scanf("%d",&a[1][0]);
    printf("matrisini 2. satir, 2. sutun degerini giriniz :");
    scanf("%d",&a[1][1]);
    printf("matrisini 2. satir, 3. sutun degerini giriniz :");
    scanf("%d",&a[1][2]);
    printf("matrisini 3. satir, 1. sutun degerini giriniz :");
    scanf("%d",&a[2][0]);
    printf("matrisini 3. satir, 2. sutun degerini giriniz :");
    scanf("%d",&a[2][1]);
    printf("matrisini 3. satir, 3. sutun degerini giriniz :");
    scanf("%d",&a[2][2]);


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
