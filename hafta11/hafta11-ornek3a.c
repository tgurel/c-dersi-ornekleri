/*Değerleri kodun başında girilen 10 elemanlı
bir tam sayı dizisini ekrana yazdırma

*/

#include <stdio.h>

int main(){
    int i;
    int a[10] = {6,3,9,55,6,-7,11,-8,1,2};
    for (i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
