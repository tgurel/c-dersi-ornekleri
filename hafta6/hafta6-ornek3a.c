// Kullanıcının girdiği bir tam sayının
// "asal sayı" olup olmadığını bulan bir C kodu yazınız.


# include<stdio.h>


int main (){
    // değişkenlerin tanımlanması
    int n,i,sayac;
    // kullanıcıdan veri girişi
    printf("Pozitif bir tam sayi giriniz : ");
    scanf("%d",&n);
    // hesaplama bölgesi

    sayac = 0;
    for (i=2;i<=n/2;i++){
        if (n%i==0){
            sayac = sayac + 1;
            break;
        }

    }

    // sonuçların ekrana yazılması
    if (sayac==0){
        printf("Bu sayi asaldir...\n");
    }
    else{
        printf("Bu sayi asal degildir...\n");
    }

    return 0;
}


/*
Örnek:

Pozitif tam sayi giriniz: 12
Bu sayi asal degildir..

Pozitif tam sayi giriniz: 41
Bu sayi asaldir..

*/
