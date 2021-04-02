// İki değişkenin değerini birbirlerine
// değiş-tokuş eden kod yazınız.
// 3. bir değişken kullanmadan yapınız....

# include<stdio.h>


int main (){

    int a,b;
    a=3;b=8;

    printf("Onceki degerler a=%d ve b=%d\n",a,b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("Sonraki degerler a=%d ve b=%d",a,b);


    return 0;
}
