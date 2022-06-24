#include <stdio.h>
#include <stdlib.h>


int main(){
    int length(char * s){
        int l=0 ;
        while (*s != '\0' ){
            l++ ;
            s=s+1 ;
        }
        return l ;   
    }
 
    
    char * alloc(char * s) {
        int l = 1+length(s) ;
        char * a = malloc(l * sizeof(char)) ;
        return a ;
        }

    #ifdef ALGO
    void copy_alloc(char * s){
        char * a = alloc(s);
        int i = 0 ; 
        while (*(s+i) != '\0') {
            *(a+i) = *(s+i) ;
            ++i ;
        }
        *(a+i)='\0' ;    
    }

    #endif

    int nb_de_e(char * s){
        int res = 0 ; ;
        char a = *s ;
        int i = 0 ;
        while (a != '\0') {
            if (*s = 'e'){
                ++res ;
            }
            ++i ;
            a= *(s+i) ;
        }
        return res ;
    }

    char * s = "hello" ;
    int a= *s ;
    int b= *(s+5) ;
    printf("a= %d\n", a) ;
    printf("b=%d\n", b) ;
    int c = length(s) ;
    printf("c=%d\n",c) ;
    char * d = alloc(s) ;
}
