#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string m_name;
    int m_age;

public:
    Person() {};
    Person(string x, int y) : m_name(x), m_age(y)
    {

    }

    void setName (string x)
    {
        m_name = x;
    }
    void setAge (int x)
    {
        m_age = x;
    }

    string getName() const
    {
        return m_name;
    }
    int getAge() const
    {
        return m_age;
    }
};

Person* createPerson(string x, int y)
{
    return new Person(x, y);
}

string enterName()
{
    cout << "Enter your name: \n";
    string name;
    cin >> name;
    return name;
}

int enterAge()
{
    cout << "Enter your age: \n";
    int age;
    cin >> age;
    return age;
}

void print (const Person &test)
{
    cout << test.getName() << '\n';
    cout << test.getAge() << '\n';
}

void changeClassAge(Person &test)
{
    cout << "Enter new age: \n";
    int age;
    cin >> age;
    test.setAge(age);
}

int main()
{
    cout << "Hello world!" << endl;
    int x {enterAge()};
    string y {enterName()};
    Person *antoine = createPerson(y, x);
    print(*antoine);
    changeClassAge(*antoine);
    print(*antoine);

    delete antoine;
    antoine = nullptr;

    return 0;
}
