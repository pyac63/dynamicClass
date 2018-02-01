#include <iostream>
#include <string>
#include "class_decla.h"
#include "fcn_decla.h"

using namespace std;

Person* createPerson(string x, int y, int z, int ca)
{
    return new Person(x, y, z, ca);
}

string enterName()
{
    cout << "Enter your name: \n";
    string name;
    cin >> name;
    return name;
}

int enterHp()
{
    cout << "Enter your Hp: \n";
    int hp;
    cin >> hp;
    return hp;
}

int enterStr()
{
    cout << "Enter your Strength: \n";
    int str;
    cin >> str;
    return str;
}

int enterCa()
{
    cout << "Enter your Class Armor: \n";
    int ca;
    cin >> ca;
    return ca;
}


void print (const Person &test)
{
    cout << test.getName() << '\n';
    cout << test.getHp() << '\n';
    cout << test.getStr() << '\n';
    cout << test.getCa() << '\n';
}

