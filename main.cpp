#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string m_name;
    int m_hp;
    int m_str;

public:
    Person() {};
    Person(string x, int y, int z) : m_name(x), m_hp(y), m_str(z)
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
};

Person* createPerson(string x, int y, int z)
{
    return new Person(x, y, z);
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
    cout << "Enter your Hp: \n";
    int str;
    cin >> str;
    return str;
}

void print (const Person &test)
{
    cout << test.getName() << '\n';
    cout << test.getHp() << '\n';
    cout << test.getStr() << '\n';
}


int main()
{
    cout << "Hello world!" << endl;
    string x {enterName()};
    int y {enterHp()};
    int z {enterStr()};
    Person *antoine = createPerson(x, y, z);
    print(*antoine);

    delete antoine;
    antoine = nullptr;

    return 0;
}
