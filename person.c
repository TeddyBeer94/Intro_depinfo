
#include "stdlib.h"
#include "person.h"

Person* createPerson(int s, int d){
    Person * p ;
    p -> src = s ;
    p -> dest = d ;
    return p ;
}
PersonList* insert(Person *p, PersonList *list){
    PersonList * L ;
    L -> person = p ;
    L-> next = list ;
    return L ;
}
