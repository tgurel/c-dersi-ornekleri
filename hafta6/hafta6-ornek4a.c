// 2'den n sayısına kadar olan
// tam sayilar içinde en çok bölene sahip
// olan sayiyi bulunuz.
// Not: 2-n arası en çok bölene sahip sayı miktarı 1 den fazla ise
// büyük olan ekrana yazdırınız.
// Not2: n sayısı kullanıcı tarafında girilecektir.
# include<stdio.h>


int main (){

    int n,i,j,sayac;
    int ecbs; //en cok bolen sayisi
    int ecbsos; // en çok bolene sahip olan sayi

    printf("Pozitif bir tam sayi giriniz : ");
    scanf("%d",&n);

    // n=96
    // 2..n=96
    ecbs=0;
    for (i=2;i<=n;i++){
        if (i%50000==0){
            printf("ilk %d incelendi..\n",i);
        }
        // i=36
        // 2 .. 18
        sayac=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                sayac=sayac+1;
            } // if biter
        } // j biter
        if (sayac>=ecbs){
            ecbs=sayac;
            ecbsos = i;
        }
        printf("%d sayisinin bolen sayisi = %d\n",i,sayac);
    } // i biter
    printf("----------------------------\nEn cok bolene sahip sayi = %d\n",ecbsos);
    printf("Bu sayinin bolen sayisi = %d\n",ecbs);




    return 0;
}


/*
Örnek:

Bir tam sayi giriniz: 15
2 0
3 0
4 1
5 0
6 2
7 0
8 2
9 1
10 2
11 0
12 4
13 0
14 2
15 2
En cok bolene sahip sayi: 12

*/



/*
    15

    i    j (2 den baslayip i/2 e kadar döngü açılacak)
    2 -> 2!!
    3 -> 2 !!
    4 -> 2
    5 -> 2
    6 -> 2 3
    7 -> 2 3
    8 -> 2 3 4
    9 -> 2 3 4
   10 -> 2 3 4 5

   18 -> 2 .. 9
   ..
   36 -> 2 .. 18
   37 -> 2 .. 18
   3327987 -> 2 .. 1663993
    --------
*/
