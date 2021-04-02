// 1 den 100'e kadar olan sayıların toplamını
// bulan program...

# include<stdio.h>


int main (){
    int i,toplam; //2.7 milyar

    toplam = 0; // ilk degerleme
    for(i=1;i<=100;i++){
        toplam = toplam + i;
    }
    printf("1 den 100'e kadar sayilarin toplami = %d 'dir...", toplam);
    getch();
    return 0;
}
