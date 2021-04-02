
// Ders uygulaması
// Kullanıcının girdiği bir tam sayının
// pozitif, negatif ya da sıfır olduğunu
// bulan program...
// if-else ile

# include<stdio.h>

int main (){
    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);

    if(a>=0){
        if(a==0){
            printf("girilen sayi sifirdir.\n");
        }
        else{
            printf("%d sayisi pozitiftir.\n",a);
        }
    }
    else{
        printf("%d sayisi negatiftir.\n",a);
    }
    return 0;
}
