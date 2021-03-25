/*
yuzde operatoru
yani
mod alma operatoru

Kullanicinin girdigi bir tam sayinin
7'ye tam bolunup bolunmedigini bulup ekrana
yazan program (if kisminda bolunmez once bolunur sonra yazilirsa)
*/

#include<stdio.h>


int main(){

    int sayi;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

    if (sayi%7>0){ // ya da if(sayi!=0){
        printf("bu sayi yediye tam bolunmez..");
    }
    else{
        printf("bu sayi yediye tam bolunur");
    }

    return 0;
}






