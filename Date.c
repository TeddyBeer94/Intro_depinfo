#include <stdio.h>
#include <stdlib.h>
#include "Date.h"

Date *  create_date (int d, int m, int y) {
    Date * res = malloc(sizeof(Date)) ;
    res -> jour = d ;
    res -> mois = m ;
    res -> annee = y ;
    return res ;
}

void print_date ( Date * d){
    printf("%d",d -> jour ) ;
    printf("/%d", d ->mois) ;
    printf("/%d\n", d -> annee) ; 
}
