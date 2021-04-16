// Kullanıcının girdiği bir tam sayının
// tam bölenlerini ekrana yazdırınız..
// Kendisi ve bir hariç..
// Ayrıca kaç tane böleni olduğunu da bulunuz ve ekrana yazdırınız.
// ve ayrıca bölenlerin toplamını da bulsun...
# include<stdio.h>


int main (){

    int n,i,sayac,toplam;

    printf("Pozitif bir tam sayi giriniz : ");
    scanf("%d",&n);
    // 36
    // 2 3 4 5 6 7 8 9 10 11 12 ... 18
    printf("Bu sayinin bolenleri: \n");
    sayac = 0;
    toplam = 0;
    for (i=2;i<=n/2;i++){
        if (n%i==0){
            printf("%d\n",i);
            sayac = sayac + 1;
            toplam = toplam + i;
        }
    }
    printf("Toplam bolen sayisi : %d \n",sayac);
    printf("Bolenlerinin toplami : %d \n",toplam);



    return 0;
}


/*
Örnek:

Bir tam sayi giriniz: 12
Bu sayinin bölenleri:
2
3
4
6
Toplam bolen sayisi : 4
Bolenlerinin toplami : 15



*/
