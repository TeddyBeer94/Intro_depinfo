#ifndef PERSON_H
#define PERSON_H
#include <stddef.h>

typedef struct _Person {
    int src;
    int dest;
} Person;

typedef struct _PersonList {
    Person *person;
    struct _PersonList *next;
} PersonList;

Person* createPerson(int s, int d);
PersonList* insert(Person *p, PersonList *list);

#endif
