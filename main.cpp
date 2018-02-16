#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>
#include "class_decla.h"
#include "fcn_decla.h"

using namespace std;



int main()
{
    cout << "Hello world!" << endl;
    bool playerAlive = true;
    while (playerAlive)
    {
        playerAlive = game();
    }


    return 0;
}
