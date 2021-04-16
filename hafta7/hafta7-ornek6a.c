/*
Collatz serisi

Collatz dizisinin ilk elemanı birden büyük rastgele
bir tamsayıdır. Bu sayıya n diyelim. Eğer n çift ise
dizinin sıradaki elemanı n/2, tek ise 3n+1 olur.
Tüm sayılar için ispatlanamasa da bu şekilde dizi
belli bir sayıdan sonra 1'e inmektedir. Kullanıcının
girdiği bir n (n>1) sayısını Collatz dizisinin
ilk elemanı olarak kabul eden ve serinin elemanlarını
ve kaç tane elemanı olduğunu (sondaki 1 sayısı hariç)
ekrana yazan bir C kodu yazınız. (Bu kodda "while"
ya da "do-while" kullanılacaktır.)
Örnek:
Bir tam sayi giriniz : 15
15 46 23 70 35 106 53 160 80 40 20 10 5 16 8 4 2
eleman sayisi = 17


*/


#include <stdio.h>

int main(){

  int n,sayac;
  printf("Collatz serisi icin ilk elemani giriniz :");
  scanf("%d",&n);

  while(n>=2){
    printf("%d ",n);
    sayac++;
    if (n%2==0){
        n=n/2;
    }
    else{
        n=3*n+1;
    }
  }
  printf("\n\nEleman sayisi=%d",sayac);


}





