
// Ders uygulaması
// Kullanıcının girdiği bir tam sayının
// pozitif, negatif ya da sıfır olduğunu
// bulan program...
// sadece if, else yok..

#include<stdio.h>



int main (){
    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);

    if(a>0){
        printf("%d sayisi pozitiftir.\n",a);
    }
    if(a<0){
        printf("%d sayisi negatiftir.\n",a);
    }
    if(a==0) {
        printf("%d sayisi sifira esittir.\n",a);
    }
    return 0;
}
