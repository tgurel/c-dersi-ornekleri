/*
Değerleri kodun başında girilen iki
matrisin toplamını bulunuz.
*/
#include<stdio.h>
int main(){
    int i,j;
    int a[4][3]=
        {
            {1,2,3},
            {4,5,6},
            {7,8,9},
            {10,11,12},
        };
    int b[4][3]=
        {
            {1,2,3},
            {4,5,6},
            {7,8,9},
            {10,11,12},
        };
    int c[4][3];

    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("A matrisi\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("-------------------\n");
    printf("B matrisi\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("-------------------\n");
    printf("C matrisi\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("-------------------");
}
