/*
Değerleri kodun başında girilen iki matrisin
çarpımını bulan ve ekrana yazan kod.
*/
#include<stdio.h>
int main(){
    int n1=3,m1=2;
    int n2=2,m2=5;

	int a[3][2]={{45,34},{12,9},{97,3}};
	int b[2][5]={{2,3,78,8,3},{212,9,442,4,5}};
	int c[3][5]={0};
	int i,j,k;
	printf("a Matrisi...\n_____________________\n");
	for(i=0;i<n1;i++){
		for(j=0;j<m1;j++){
			printf("%7d ",a[i][j]);
		}
		printf("\n");
	}
	printf("b Matrisi...\n_____________________\n");
	for(i=0;i<n2;i++){
		for(j=0;j<m2;j++){
			printf("%7d ",b[i][j]);
		}
		printf("\n");
	}
	//c yi hesapla
	for(i=0;i<n1;i++){
		for(j=0;j<m2;j++){
			for(k=0;k<m1;k++){
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
			}
		}
	}

	printf("c Matrisi...\n_____________________\n");
	for(i=0;i<n1;i++){
		for(j=0;j<m2;j++){
			printf("%7d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
