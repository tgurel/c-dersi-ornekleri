/*
yuzde operatoru yani mod alma operatoru

Kullanicinin girdigi bir tam sayinin
cift mi yoksa tek mi oldugunu ekrana
yazan program (tek degisken kullanarak)
*/

#include<stdio.h>


int main(){

    int sayi;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

    if (sayi%2==0){
        printf("bu sayi cifttir...");
    }
    else{
        printf("bu sayi tektir...");
    }

    return 0;
}






