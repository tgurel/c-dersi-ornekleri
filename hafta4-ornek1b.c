/*
Değerleri kullanıcı tarafından girilen 3 sayıdan
hangisinin büyük olduğunu bulan program.
*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("a tam sayisini gir : ");
    scanf("%d",&a);
    printf("b tam sayisini gir : ");
    scanf("%d",&b);
    printf("c tam sayisini gir : ");
    scanf("%d",&c);
    // yöntem 2
    // bu yöntemde mantiksal operatör kullanacagiz...

    if(a>b && a>c){
        printf("a en buyuktur...");
    }
    if(b>a && b>c){
        printf("b en buyuktur...");
    }
    if(c>a && c>b){
        printf("c en buyuktur...");
    }



}


