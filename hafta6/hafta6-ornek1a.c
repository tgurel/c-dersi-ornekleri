// Kullanıcının girdiği bir tam sayının
// tam bölenlerini ekrana yazdırınız..
// Kendisi ve bir hariç..
# include<stdio.h>


int main (){

    int n,i;

    printf("Pozitif bir tam sayi giriniz : ");
    scanf("%d",&n);

    // n bolunen
    // i bolen
    // örneğin n=36 için 2 ile 18 arası sayıları inceleyeceğim.
    printf("Bu sayinin bolenleri: \n");
    for (i=2;i<=n/2;i++){
        if (n%i==0){
            printf("%d\n",i);
        }
    }

    return 0;
}


/*
Çalıştırma Örneği:

Bir tam sayi giriniz: 12
Bu sayinin bölenleri:
2
3
4
6

Bir tam sayi giriniz: 28
Bu sayinin bölenleri:
2
4
7
14


*/
