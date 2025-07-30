#include <iostream>
#include "IntList.h"
using namespace std;

IntList::IntList()
{
    dummyHead = new IntNode(0); // Dummy head node
    dummyTail = new IntNode(0); // Dummy tail node
    dummyHead->next = dummyTail; // Link head to tail
    dummyTail->prev = dummyHead; // Link tail to head
}

IntList::~IntList()
{
    //
}

IntList::IntList(const IntList &other)
{
    dummyHead = new IntNode(0);
    dummyTail = new IntNode(0);
    dummyHead->next = dummyTail; // Link head to tail
    dummyTail->prev = dummyHead; // Link tail to head

    IntNode *current = other.dummyHead->next;
    while (current != other.dummyTail)
    {
        push_back(current->data); // Copy each element
        current = current->next;
    }
}

IntList& IntList::operator=(const IntList &other)
{
    if (this != &other) // Check for self-assignment
    {
        // Clear current list
        while (!empty())
            pop_front();

        // Copy elements from other list
        IntNode *current = other.dummyHead->next;
        while (current != other.dummyTail)
        {
            push_back(current->data);
            current = current->next;
        }
    }
    return *this; // Return the current object
}

void IntList::push_front(int value)
{
    //
}
void IntList::pop_front()
{
    //
}
void IntList::push_back(int value)
{
    //
}
void IntList::pop_back()
{
    //
}
bool IntList::empty() const
{
    return dummyHead->next == dummyTail; // Check if the list is empty
}
ostream &operator<<(ostream &out, const IntList &rhs)
{
    //
    return out; // Return the output stream
}
void IntList::printReverse() const
{
    //
}