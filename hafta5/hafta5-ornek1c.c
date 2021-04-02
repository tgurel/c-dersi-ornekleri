
// Ders uygulaması
// Kullanıcının girdiği bir tam sayının
// pozitif, negatif ya da sıfır olduğunu
// bulan program...
// sıfırı pozitif kabul eden çözüm..

# include<stdio.h>

int main (){
    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);

    if(a>=0){
        printf("%d sayisi pozitiftir.\n",a);
    }
    else{
        printf("%d sayisi negatiftir.\n",a);
    }
    return 0;
}
