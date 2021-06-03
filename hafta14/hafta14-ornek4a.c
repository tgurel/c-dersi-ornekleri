/*verilen iki matris elamanının değerlerini
değiş-tokus eden bir fonk yazınız.
4,8,2
1,71,6
4,8,2
1,7,62
degistir(?????);
4,8,2
1,62,6
4,8,2
1,7,71
*/
#include <stdio.h>
#define NSATIR 4
#define NSUTUN 3
void degistir(int,int,int,int,int,int,int[NSATIR][NSUTUN]);
void ekranayazdir(int,int,int[NSATIR][NSUTUN]);
int main(){
    int i,j;
    int a[4][3]={{4,8,2},{1,71,6},{4,8,2},{1,7,62}};
    printf("Fonksiyonu calistirmadan once:\n");
    ekranayazdir(4,3,a);
    degistir(4,3,1,1,3,2,a);
    printf("Fonksiyonu calistirdiktan sonra:\n");
    ekranayazdir(4,3,a);
    return 0;
}

void ekranayazdir(int nsatir, int nsutun, int b[nsatir][nsutun]){
    int i,j;
    for(i=0;i<nsatir;i++){
        for(j=0;j<nsutun;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

void degistir(int nsatir, int nsutun, int i1, int j1, int i2, int j2, int b[nsatir][nsutun]){
    int   ara = b[i1][j1];
    b[i1][j1] = b[i2][j2];
    b[i2][j2] = ara;
}
