#include <stdio.h>



int main(){
    #ifdef ALGO
    int length(char s[]){
        int l=0 ;
        int c = *s ;
        while (c != 0 ){
            l++ ;
            c=*(s+l) ;
        }
        return l ;
            
    }
    #endif

    char s[] = "hello" ;
    int a= *s ;
    int b= *(s+5) ;
    printf("a= %d\n", a) ;
    printf("b=%d\n", b) ;
    int c = length(s) ;
    printf("c=%d\n",c) ;
}
