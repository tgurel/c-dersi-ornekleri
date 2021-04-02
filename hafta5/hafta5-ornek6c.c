// Kullanıcının girdiği iki sayı arasında olan
// sayıların toplamını bulan program... (girilen iki sayi dahil)
// Kullanıcı küçük-büyük sayıyı karışık girebilir. Program sayıların hangisinin
// küçük hangisinin büyük olduğunu tespit edip ona göre toplama işlemini yapar.

# include<stdio.h>

int main (){
    int i,n1,n2,ks,bs,toplam; // ks:kucuk sayi , bs:buyuk sayi

    printf("Tam sayiyi giriniz = ");
    scanf("%d",&n1);
    printf("Tam sayiyi giriniz = ");
    scanf("%d",&n2);

    if(n1>=n2){
        bs=n1;
        ks=n2;
    }
    else{
        bs=n2;
        ks=n1;
    }

    toplam = 0; // ilk degerleme
    for(i=ks;i<=bs;i++){
        toplam = toplam + i;
    }
    printf("%d'den %d'e kadar sayilarin toplami = %d 'dir...", ks, bs, toplam);
    getch();
    return 0;
}
