#include <stdio.h>
 

int main(){

    int min(int a, int b){
        if (a<= b) {
            return a ;
        }
        return b ;
    }

    #ifdef ALGO 
    int comp_str(char s1[], char s2[],int L1,int L2){
        int L=min(L1,L2) ;
        for (int i=0 , i< L  ,i=i+1) {
            if (s1[i] < s2[i]) {
                return 1 ;
            }
            if (s1[i] < s2[i]) {
                return -1 ;
            }
        } ; 
        #if (L1 < L2) {
          return 1 ;
        }
        if (L1 = L2) {
            return 0 ;
        }
        return -1 ;
    }  
        
    
    #endif

    char c = 'c' ; 
    char m = 'm' ;
    if  (c < m ){
        printf("c est plus petit que f\n");
    }

}
