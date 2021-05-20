/*Değerleri kodun başında girilen
10 elemanlı tam sayı dizisinin en
büyük elemanını bulma.
*/

#include <stdio.h>

int main(){
    int i,enbuyuk;
    int a[10] = {6,302,9,55,6,-7,61,-8,1,2};
    enbuyuk=a[0];
    printf("%d ",a[0]);
    for (i=1;i<10;i++){
        printf("%d ",a[i]);
        if(a[i]>enbuyuk){
            enbuyuk = a[i];
        }
    }
    printf("\nEn buyuk sayi = %d", enbuyuk);

    return 0;
}
