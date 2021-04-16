// kullanıcının girdiği
// n tane sayıdan kaç tanesinin asal
// olduğunu bulan program sayıları


# include<stdio.h>

int main (){

    int i,j,n,sayi,sayac, sayac_asal;

    printf("Sayin kullanici kac tane tam sayi gireceksiniz ? ");
    scanf("%d",&n);

    sayac_asal=0;
    for (i=1;i<=n;i++){
       printf("%d. sayiyi giriniz : ",i);
       scanf("%d",&sayi);

       sayac=0;
       for(j=2;j<=sayi/2;j++){
           //printf("Merhaba ben j nin icinden yaziyorum...");
           if (sayi%j==0){
              sayac=sayac+1;
           }
       } // j biter
       if(sayac==0){
           sayac_asal = sayac_asal + 1;
           //printf("Su ana kadar %d tane asal sayi girdiniz..\n",sayac_asal);
       }

    } // i biter
    printf("Toplam %d tane asal sayi girisi yaptiniz.",sayac_asal);

    return 0;
}


/*
Sayin kullanici kac tane tam sayi gireceksiniz? 5
1. Sayiyi giriniz: 5
2. Sayiyi giriniz: 9
3. Sayiyi giriniz: 17
4. Sayiyi giriniz: 8
5. Sayiyi giriniz: 6
Toplam 2 tane asal sayı girişi yaptınız.
*/
