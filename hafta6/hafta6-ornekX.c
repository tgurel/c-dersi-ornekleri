
/*
İç içe döngü için bir örnek..
*/

# include<stdio.h>


int main (){

    int i,j,sayac;



    sayac = 0;
    for(i=1;i<=10;i++){
      for(j=1;j<=10;j++){
        printf("i=%d j=%d\n",i,j);
        sayac = sayac + 1;
      }
    }
    printf("Sayac=%d",sayac);

    return 0;
}
