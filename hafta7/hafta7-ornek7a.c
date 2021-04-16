/*
Fibonacci serisi

0 1 1 2 3 5 8 13 21 34 55 89 ...

17. fibonacci sayisini bulan kodu yazınız...

*/

#include <stdio.h>

int main(){
    int terim1,terim2,terim3,sayac;

    terim1=0;
    printf("1. terim %d\n",terim1);
    terim2=1;
    printf("2. terim %d\n",terim2);
    sayac=3;
    while(sayac<=17){
        terim3=terim1+terim2;
        printf("%d. terim %d oran=%lf\n",sayac,terim3,(double)terim3/terim2);
        terim1=terim2;
        terim2=terim3;

        sayac=sayac+1;
    }

}





