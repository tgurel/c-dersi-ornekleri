/*Değerleri kodun başında girilen
10 elemanlı tam sayı dizisinin en
büyük elemanını bulma.
*/

#include <stdio.h>

int main(){
    int i,enkucuk;
    int a[10] = {6,302,-12,55,6,-7,61,-8,1,2};
    enkucuk=a[0];
    printf("%d ",a[0]);
    for (i=1;i<10;i++){
        printf("%d ",a[i]);
        if(a[i]<enkucuk){
            enkucuk = a[i];
        }
    }
    printf("\nEn kucuk sayi = %d", enkucuk);

    return 0;
}
