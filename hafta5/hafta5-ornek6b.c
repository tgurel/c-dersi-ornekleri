//Kullanıcının girdiği iki sayı arasında olan
//sayıların toplamını bulan program... (girilen iki sayi dahil)
// Kullanıcı önce küçük sonra büyük sayıyı girmez ise uyarı versin...

# include<stdio.h>


int main (){
    int i,n1,n2,toplam;

    printf("Kucuk tam sayiyi giriniz = ");
    scanf("%d",&n1);
    printf("Buyuk tam sayiyi giriniz = ");
    scanf("%d",&n2);

    if (n1>n2){
        printf("Uygun sayilar girmediniz...");
    }
    else{
        toplam = 0; // ilk degerleme
        for(i=n1;i<=n2;i++){
            toplam = toplam + i;
        }
        printf("%d'den %d'e kadar sayilarin toplami = %d 'dir...", n1, n2, toplam);
    }
    getch();
    return 0;
}
