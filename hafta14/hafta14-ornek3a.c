/*verilen iki dizi elamanının değerlerini
değiş-tokus eden bir fonk yazınız.
4,8,2,1,7
degistir(a,5,1,3);
4,1,2,8,7

*/

#include <stdio.h>

void degistir(int[],int,int,int);
int main(){
    int i;
    int a[5]={4,8,2,1,7};
    printf("Fonksiyonu calistirmadan once:\n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    degistir(a,5,0,1);

    printf("Fonksiyonu calistirdiktan sonra:\n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
void degistir(int b[], int boyut, int indis1, int indis2){
    int   ara = b[indis1];
    b[indis1] = b[indis2];
    b[indis2] = ara;
}
