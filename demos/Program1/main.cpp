#include "iostream"
using namespace std;

struct Person
{
    string name;
    Person *next;
    Person *prev;
    Person(string n) : name(n), next(nullptr), prev(nullptr) {}
};


class PersonList
{
private:
    Person *circleHead;
public:
    PersonList() : circleHead(nullptr)
    {
        circleHead = nullptr;
    }
    Person* getCircleHead() const
    {
        return circleHead;
    }

    void addPerson(const string &name)
    {
        Person *newPerson = new Person(name);
        if (!circleHead)
        {
        }
        else    // add to end
        {
        }
    }
    Person* removePerson(Person *person)
    {
        // demo
        return nullptr;
    }

    Person* nextKpersons(Person *start, int k)
    {
        // demo
        return nullptr;
    }
};

int main()
{
    int n, k, count = 0;
    std::cin >> n >> k;
    PersonList circle;
    std::string name;
    while (true)
    {
        // input
        // add person
        // limit to n persons
    }
    Person *temp = circle.getCircleHead();
    for (int i = 0; i < count - 1; ++i)
    {
        Person* toRemove = circle.nextKpersons(temp, k);
        Person* nextPerson = circle.removePerson(toRemove);
        temp = nextPerson;
    }
    std::cout << temp->name << " wins!";
    return 0;
}