// verilen bir sayının tam bölenlerini bulunuz...
// (kendisi ve 1 sayisi haric)

# include<stdio.h>

int main (){

    int i,n;

    printf("Bir tam sayi giriniz : ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++){ // 2 3 4 ... 14
        if(n%i==0){
            printf("%d sayisi %d sayisina tam bolunur..\n",n,i);
        }
        //else{
            //printf("%d sayisi %d sayisina tam bolunmez..\n",n,i);
        //}
    }

    return 0;
}
