/*
Değerleri kodun başında girilen 9 elemanlı bir dizinin
değerlerini 3x3'lük matrise kopyalayan bir kod yazınız.
*/
#include<stdio.h>
int main(){
    int i,j;
    int b[9]={8,2,6,-1,5,4,-7,3,-4};
    int a[3][3];
    int sayac;
    // kopyalama
    sayac=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            //i,j yazarak 9 elemana da ulasıyorum
            a[i][j] = b[sayac];
            sayac++;
        }
    }
    // matrisin ekrana yazdırılması
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }}

