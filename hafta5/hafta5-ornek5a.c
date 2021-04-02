// 1 den kullanıcının girdiği sayıya kadar olan
//sayıların toplamını bulan program...

# include<stdio.h>


int main (){
    int i,n,toplam;

    printf("Bir tam sayi giriniz = ");
    scanf("%d",&n);

    toplam = 0; // ilk degerleme
    for(i=1;i<=n;i++){
        toplam = toplam + i;
    }
    printf("1 den %d'e kadar sayilarin toplami %d sayisidir...", n, toplam);
    getch();
    return 0;
}
