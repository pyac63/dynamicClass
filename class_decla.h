#ifndef CLASS_DECLA_H
#define CLASS_DECLA_H

#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

class Person
{
private:
    string m_name;
    int m_hp;
    int m_str;
    int m_ca;

public:
    Person() {};
    Person(string x, int y, int z, int ca) : m_name(x), m_hp(y), m_str(z), m_ca(ca)
    {

    }

    void setName (string x)
    {
        m_name = x;
    }
    void setHp (int x)
    {
        m_hp = x;
    }

    void setStr (int x)
    {
        m_str = x;
    }

    string getName() const
    {
        return m_name;
    }
    int getHp() const
    {
        return m_hp;
    }

    int getStr() const
    {
        return m_str;
    }

    int getCa() const
    {
        return m_ca;
    }
};


#endif
