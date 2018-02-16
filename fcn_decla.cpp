#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>
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

int getRandomNumber(int min, int max)
{
	// Note: Due to a bug in the Code::Blocks compiler, if using Code::Blocks on Windows, delete the two lines above and uncomment this line:
	static mt19937 mersenne(static_cast<unsigned int>(time(0))); // initialize our mersenne twister with a random seed
	static const double fraction = 1.0 / (static_cast<double>(mersenne.max()) + 1.0);
	return min + static_cast<int>((max - min + 1) * (mersenne() * fraction));
}

bool checkCrit(int x)
{
    if (x == 20)
        return true;
    else
        return false;
}
int rollD20 (char character)
{
    using namespace std::this_thread;
    using namespace std::chrono;

    int result = getRandomNumber(1, 20);

    if (character == 'p')
    {
        char validate;
        do
        {
            cout << "Enter (r) to throw the dice!\n";
            cin >> validate;
        }
        while (validate != 'r');

        sleep_for(seconds(1));
        cout << ".\n";
        sleep_for(seconds(1));
        cout << ".\n";
        sleep_for(seconds(1));
        cout << ".\n";
        sleep_for(seconds(1));
        cout << "You rolled a " << result << ".\n";

    }
    else
    {

        cout << "Enemy rolled a " << result << ".\n";

    }

    return result;


}
