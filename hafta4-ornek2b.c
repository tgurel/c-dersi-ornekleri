/*
Değerleri kullanıcı tarafından girilen 12 sayıdan
hangisinin büyük olduğunu bulan program.
*/
#include <stdio.h>
int main(){
    int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;
    int enbuyuk;
    printf("Aralarina bosluk koyarak 12 tane tam sayi giriniz : ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10,&s11,&s12);

    enbuyuk=s1;

    if(s2>enbuyuk){
        enbuyuk=s2;
    }
    if(s3>enbuyuk){
        enbuyuk=s3;
    }
    if(s4>enbuyuk){
        enbuyuk=s4;
    }
    if(s5>enbuyuk){
        enbuyuk=s5;
    }
    if(s6>enbuyuk){
        enbuyuk=s6;
    }
    if(s7>enbuyuk){
        enbuyuk=s7;
    }
    if(s8>enbuyuk){
        enbuyuk=s8;
    }
    if(s9>enbuyuk){
        enbuyuk=s9;
    }
    if(s10>enbuyuk){
        enbuyuk=s10;
    }
    if(s11>enbuyuk){
        enbuyuk=s11;
    }
    if(s12>enbuyuk){
        enbuyuk=s12;
    }
    printf("En buyuk sayi = %d",enbuyuk);

   return 0;
}


