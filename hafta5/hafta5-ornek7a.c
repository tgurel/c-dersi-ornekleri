// İki değişkenin değerini birbirlerine
// değiş-tokuş eden kod yazınız.
// 3. bir değişken kullanınız...

# include<stdio.h>


int main (){

    int a,b,ara;

    a=3;b=8;

    printf("Onceki degerler a=%d ve b=%d\n",a,b);
    ara = a;
      a = b;
      b = ara;
    printf("Sonraki degerler a=%d ve b=%d\n",a,b);


    return 0;
}
