/*
yuzde operatoru yani mod alma operatoru

Kullanicinin girdigi bir tam sayinin
cift mi yoksa tek mi oldugunu ekrana
yazan program (iki degisken kullanarak)
*/

#include<stdio.h>

int main(){

    int sayi,kalan;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

    kalan = sayi % 2;
    if (kalan==0){
        printf("bu sayi cifttir...");
    }
    else{
        printf("bu sayi tektir...");
    }

    return 0;
}






