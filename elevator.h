#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "person.h"

typedef struct _Elevator {
    int capacity;    // capacité maximale de la cabine
    int currentFloor;// étage courant
    int targetFloor; // destination
    PersonList *persons; // personnes dans la cabine
} Elevator;

typedef struct _Building {
    int nbFloor; // nombre d’étage des l’immeuble
    Elevator *elevator; // la cabine d’ascenseur
    PersonList **waitingLists; // array of waiting list (one per floor)
} Building;

Elevator *create_elevator(int c, int CF, PersonList *PL){
    Elevator * E ;
    E -> capacity = cabine ;
    E -> currentFloor = CF ;
    E -> persons = PL ;
    return E
}

Building *create_building(int nF, Elevator * E, PersonList **WL){
    Building * B ;
    B -> nbFloor = nF ;
    B -> elevator = E ;
    B -> waitingLists = WL
    return B
};

PersonList* exitElevator(Elevator *e)
PersonList* enterElevator(Elevator *e, PersonList *list);
void stepElevator(Building *b);

#endif
