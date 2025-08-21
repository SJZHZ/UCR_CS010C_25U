#include <iostream>
#include <map>
#include <string>

int main ()
{
    std::map<char,std::string> mymap;

    mymap['a'] = "an element";
    mymap['b'] = "another element";
    mymap['c'] =  mymap['b'];

    std::cout << "mymap['a'] is " << mymap['a'] << '\n';
    std::cout << "mymap['b'] is " << mymap['b'] << '\n';
    std::cout << "mymap['c'] is " << mymap['c'] << '\n';
    std::cout << "mymap now contains " << mymap.size() << " elements.\n";

    std::cout << "-----UPDATE mymap['c']-----\n";
    mymap['c'] = "something else";
    std::cout << "mymap['c'] is " << mymap['c'] << '\n';
    std::cout << "mymap now contains " << mymap.size() << " elements.\n";

    std::cout << "-----WHAT IF mymap['d'] IS NOT SET BUT IS ACCESSED-----\n";
    std::cout << "mymap['d'] is " << mymap['d'] << '\n';
    std::cout << "mymap now contains " << mymap.size() << " elements.\n";
    std::cout << "When mymap['d'] is accessed, it is created with a default value(actually nothing).\n";
    mymap['d'] = "now changed to something else";
    std::cout << "mymap['d'] is " << mymap['d'] << '\n';
    std::cout << "mymap now contains " << mymap.size() << " elements.\n";
    return 0;
}