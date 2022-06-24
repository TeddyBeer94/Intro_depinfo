#include "elevator.h"

Elevator *create_elevator(int c, int CF, PersonList *PL){
    Elevator * E ;
    E -> capacity = c ;
    E -> currentFloor = CF ;
    E -> persons = PL ;
    return E ;
}

Building *create_building(int nF, Elevator * E, PersonList **WL){
    Building * B ;
    B -> nbFloor = nF ;
    B -> elevator = E ;
    B -> waitingLists = WL ;
    return B ;
}


PersonList * exitElevator(Elevator * e) { // crée la liste des personnes restantes après la sortie
    PersonList * L ;
    int F = e-> currentFloor ;
    PersonList * a = e -> persons  ;
    while (a != NULL) {
        if (a -> person -> dest != F) {
            insert(a->person , L) ;
        }
        a = a -> next ;
    }
    return L ;
}
