/*
Değerleri kullanıcı tarafından girilen 5 sayıdan
hangisinin büyük olduğunu bulan program.
*/
#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("a tam sayisini gir : ");
    scanf("%d",&a);
    printf("b tam sayisini gir : ");
    scanf("%d",&b);
    printf("c tam sayisini gir : ");
    scanf("%d",&c);
    printf("d tam sayisini gir : ");
    scanf("%d",&d);
    printf("e tam sayisini gir : ");
    scanf("%d",&e);

    if(a>b && a>c && a>d && a>e){
        printf("a en buyuktur...");
    }
    if(b>a && b>c && b>d && d>e){
        printf("b en buyuktur...");
    }
    if(c>a && c>b && c>d && c>e){
        printf("c en buyuktur...");
    }
    if(d>a && d>b && d>c && d>e){
        printf("d en buyuktur...");
    }
    if(e>a && e>b && e>c && e>d){
        printf("e en buyuktur...");
    }



}


