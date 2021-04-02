// kullanicinin a b c değerlerini girdiği
// ax^2 + bx + c = 0 denkleminin köklerini,
// gerçek kök olup olmadiğı ve çakışık olup olmadığı
// bilgisiyle beraber bulan bir C kodu yazınız.

#include<stdio.h>
#include<math.h>

int main (){
    float a,b,c,x1,x2,delta;

    printf("a, b ve c degerlerini aralarinda \n");
    printf("bosluk birakarak giriniz : ");
    scanf("%f%f%f",&a,&b,&c);

    delta = b*b - 4*a*c;
    if(delta<0){
        printf("Bu denklemin gercek koku yoktur..");
    }
    if(delta==0){
        x1 = -b/(2*a);
        printf("Cakisik kok vardir o da %f 'dir..",x1);
    }
    if(delta>0){
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("Iki tane gercek kok vardir..\n");
        printf("Kok 1 = %f\n",x1);
        printf("Kok 2 = %f\n",x2);
    }
    return 0;
}
