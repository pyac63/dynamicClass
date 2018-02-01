#include <iostream>
#include <string>
#include "class_decla.h"
#include "fcn_decla.h"

using namespace std;

bool game()
{
    string x {enterName()};
    int y {enterHp()};
    int z {enterStr()};
    int ca {enterCa()};
    Person *antoine = createPerson(x, y, z, ca);
    print(*antoine);
    Person *monster = createPerson("Troll", 20, 6, 14);
    print(*monster);

    //while ()
    delete antoine;
    antoine = nullptr;
    delete monster;
    monster = nullptr;


}
