#include "Date.c" 


int main(){
    Date * d = create_date(22, 06, 2022) ;
    int a= d -> jour ;
    printf("Aujourd'hui est le jour du mois numéro %d\n", a) ;
    print_date(d) ;

}
