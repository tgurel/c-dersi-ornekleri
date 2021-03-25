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

    // yöntem 1
    if(a>b){
        // ya a ya da c en büyüktür...
        if(a>c){
            printf("a en buyuktur..");
        }
        else{
            printf("c en buyuktur..(1)");
        }
    }
    else{
        // ya b ya da c en büyüktür...
        if(b>c){
            printf("b en buyuktur..");
        }
        else{
            printf("c en buyuktur..(2)");
        }
    }
}


