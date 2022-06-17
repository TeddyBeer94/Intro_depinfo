#include <stdio.h>

int main(){
    int Fibbo(int n){
        int a =0 ;
        int b=1 ;
        for (int i=0 ; i<n ; i=i+1) {
            int c = b ;
            b= c+a ;
            a=c ;
        } ;
        return a ;
    }
printf("le septieme terme de la suite de Fibbonaci est %d\n", Fibbo(7)) ;
printf("%d\n" , Fibbo(0));
}