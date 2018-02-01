#ifndef FCN_DECLA_H
#define FCN_DECLA_H


#include <iostream>
#include <string>
#include "class_decla.h"

using namespace std;

bool game();
Person* createPerson(string x, int y, int z, int ca);
string enterName();
int enterHp();
int enterStr();
int enterCa();
void print (const Person &test);


#endif // FCN_DECLA_H
