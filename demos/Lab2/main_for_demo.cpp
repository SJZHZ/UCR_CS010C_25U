/*
 * Ryan Rusich
 * CS010C Summer 25B
 * Doubly-linked list
 * solution
 * main.cpp
 */

#include <iostream>
#include "IntList.h"

using namespace std;

void printListDetails(const IntList &list) {
    IntNode *current = list.dummyHead->next;
    while (current != list.dummyTail) {
        cout << "Value: " << current->data << ", Address: " << current << endl;
        current = current->next;
    }
}

void printListDetailsWithAddresses(const IntList &list) {
    cout << "Dummy Head Address: " << list.dummyHead << endl;
    cout << "Dummy Tail Address: " << list.dummyTail << endl;
    IntNode *current = list.dummyHead->next;
    while (current != list.dummyTail) {
        cout << "Node Address: " << current << ", Value: " << current->data 
             << ", Prev Address: " << current->prev << ", Next Address: " << current->next << endl;
        current = current->next;
    }
}

void reverseTest(const IntList &list) {
    cout << "Test printReverse()\n";
    cout << "list forward: ";
    IntNode *current = list.dummyHead->next;
    while (current != list.dummyTail) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
    cout << "list reverse: ";
    current = list.dummyTail->prev;
    while (current != list.dummyHead) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
    cout << "----------------------------" << endl;
}

int main() {
    IntList list;
    //cout << list.dummyHead->data << endl;

    // Test push_front and push_back
    list.push_front(30);
    list.push_front(40);
    list.push_front(50);
    list.push_back(20);
    list.push_back(10);
    //reverseTest(list);
    
    IntList list2 = list;

    cout << "list after inserts: " << list << endl;
    printListDetailsWithAddresses(list);
    
    cout << "list2 after assignment " << list2 << endl;
    printListDetailsWithAddresses(list2);
   
    // Test pop_front and pop_back
    list.pop_front();
    list.pop_back();

    cout << "List after pop_front and pop_back: " << list << endl;

    // Test empty
    cout << "Is the list empty? " << (list.empty() ? "Yes" : "No") << endl;

    // Test printReverse
    cout << "List in reverse order: ";
    list.printReverse();
    cout << endl;
    
    // Test copy constructor
    IntList copyList(list);
    cout << "Copy list (using copy constructor): " << copyList << endl;
    cout << "Copy list details (using copy constructor):" << endl;
    printListDetails(copyList);
    
    // Test copy constructor
    cout << "list: " << list << endl;
    cout << "list details:" << endl;
    printListDetails(list);

    // Test copy assignment operator
    IntList assignedList;
    assignedList = list;
    cout << "Assigned list (using operator=): " << assignedList << endl;
    cout << "Assigned list details (using operator=):" << endl;
    printListDetails(assignedList);

    // Print list details with addresses
    cout << "Original list details with addresses:" << endl;
    //printListDetailsWithAddresses(list);

    return 0;
}
