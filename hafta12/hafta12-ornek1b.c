/*
Değerleri kodun başında verilen
3x3'lük bir matrisi ekrana "matris
formunda" yazdırınız.
Sayılar çok basamaklı olsun
*/
#include<stdio.h>
int main(){
    int i,j;
    int a[3][3]={{1111,2,3},{4,555,6},{77,8,9}};

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
