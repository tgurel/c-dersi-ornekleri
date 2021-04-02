// Verilen bir sayının verilen ikinci sayıya
// tam olarak bölünüp bölünmediğini bulan program..

# include<stdio.h>


int main (){

    int bolunen,bolen;

    printf("Bolunecek sayiyi giriniz : ");
    scanf("%d",&bolunen);
    printf("Bolen sayiyi giriniz : ");
    scanf("%d",&bolen);

    if(bolunen%bolen==0){
        printf("%d sayisi %d sayisina tam bolunur..\n",bolunen,bolen);
    }
    else{
        printf("%d sayisi %d sayisina tam bolunmez..\n",bolunen,bolen);
    }

    return 0;
}
