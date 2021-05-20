/*Değerleri kodun başında girilen
10 elemanlı tam sayı dizisinin
elemanlarının ortalamasını bulma.
*/

#include <stdio.h>

int main(){
    int i,toplam;
    float ort;
    int a[10] = {6,3,9,55,6,-7,11,-8,1,2};

    toplam=0;
    for (i=0;i<10;i++){
        printf("%d ",a[i]);
        toplam = toplam + a[i];
    }
    ort=(float)toplam/10;
    printf("\nOrtalama=%f",ort);
    return 0;
}
