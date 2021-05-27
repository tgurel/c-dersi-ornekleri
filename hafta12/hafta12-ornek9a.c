/*
Değerleri kodun başında girilen 3x3'lük matrisin
elemanlarının 9 elemanlı bir diziye
kopyalayan bir kod yazınız.
*/
#include<stdio.h>
int main(){
    int i,j;
    int a[3][3]={{8,2,6},{-1,5,4},{-7,3,-4}};
    int b[9];
    int sayac;
    // kopyalama
    sayac=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            //i,j yazarak 9 elemana da ulasıyorum
            b[sayac] = a[i][j];
            sayac++;
        }
    }
    /*
    a[0][0]--> b[0]
    a[0][1]--> b[1]
    a[0][2]--> b[2]
    a[1][0]--> b[3]
    a[1][1]--> b[4]
    a[1][2]--> b[5]
    a[2][0]--> b[6]
    a[2][1]--> b[7]
    a[2][2]--> b[8]
    */
    for(i=0;i<9;i++){
        printf("%d ",b[i]);
    }
}
