/*Değerlerini kullanıcının girdiği 10 elemanlı
tam sayı dizisinin elemanlarının toplamını bulma.
*/

#include <stdio.h>

int main(){
    int i,toplam;
    int a[10];
    // kullanıcıcdan verileri al
    for (i=0;i<10;i++){
        printf("%d. sayiyi giriniz :",i+1);
        scanf("%d",&a[i]);
    }
    // diziyi ekrana yazdır
    for (i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    // dizi elemanlarının toplamını bulma
    toplam=0;
    for (i=0;i<10;i++){
        toplam = toplam + a[i];
    }
    printf("\nToplam=%d",toplam);
    return 0;
}
