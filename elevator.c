#include <ncurses.h>
#include <stdlib.h>
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


PersonList * exitElevator(Elevator * e) { // crée la liste des personnes qui sortent
    PersonList * LS ;
    PersonList * LR ;
    int F = e-> currentFloor ;
    PersonList * a = e -> persons  ;
    while (a != NULL) {
        if (a -> person -> dest != F) {
            LR = insert(a->person , LR) ;
        }
        else {
            LS = insert (a->person , LS) ;
        }
        a = a -> next ;
    }
    e-> persons = LR;
    return LS ;
}
int taille(PersonList * L){
    int n=0 ;
    while (L != NULL){
        ++n ;
        L = L -> next ;
    }
    return n ;
}


PersonList* enterElevator(Elevator *e, PersonList *l){
    int c = e-> capacity ;
    int n= taille(e->persons) ;
    int i=0 ;
    while ( i <c-n) {
        if (l != NULL){
            e-> persons = insert(l->person , e-> persons);
            l = l-> next ;
            i++ ;
        }
    }
    return l ;
}

void stepElevator(Building *b) {
    if (b->elevator -> currentFloor == b->elevator -> targetFloor){
        PersonList * LS = exitElevator(b->elevator);
        (b-> waitingLists)[b->elevator->currentFloor] = enterElevator(b->elevator , (b-> waitingLists)[b->elevator->currentFloor]);
    }
    else {
        if (b->elevator -> currentFloor > b->elevator -> targetFloor){
        b-> elevator -> currentFloor = -1 + b-> elevator -> currentFloor ;
        }
        else{
            b-> elevator -> currentFloor = 1 + b-> elevator -> currentFloor ;
        }
    }      
}
