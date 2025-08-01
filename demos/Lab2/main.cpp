#include <iostream>
#include "IntList.h"
using namespace std;

int main()
{
    IntList list1;
    list1.push_front(10);
    list1.push_front(20);
    std::cout << "list1 : " << &list1 << std::endl << list1 << std::endl;

    IntList list2;
    list2 = list1;          // assignment operator
    std::cout << "list2 : \n" << &list2 << std::endl << list2 << std::endl;

    IntList list3(list2);   // copy constructor
    std::cout << "list3 : \n" << &list3 << std::endl << list3 << std::endl;
    
    IntList list4 = list1;  // COPY CONSTRUCTOR!!!
    std::cout << "list4 : \n" << &list4 << std::endl << list4 << std::endl;


    IntList* list5 = new IntList(list1);
    std::cout << "list5 : \n" << list5 << std::endl << *list5 << std::endl;
    delete list5;

    std::cout << "Near the end of main, before deleting" << std::endl;
    return 0;
    // deleting other lists
}
