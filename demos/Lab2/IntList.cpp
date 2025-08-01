#include <iostream>
#include "IntList.h"
using namespace std;

IntList::IntList()
{
    dummyHead = new IntNode(0);
    dummyTail = new IntNode(0);
    dummyHead->next = dummyTail;
    dummyTail->prev = dummyHead;
}

IntList::~IntList()
{
    while (!empty())
    {
        std:: cout << "Deleting node with value: " << dummyHead->next->data << " at address: " << dummyHead->next << std::endl;
        pop_front();
    }
    delete dummyHead;
    delete dummyTail;
}

IntList::IntList(const IntList &other)
{
    dummyHead = new IntNode(0);
    dummyTail = new IntNode(0);
    dummyHead->next = dummyTail;
    dummyTail->prev = dummyHead;

    IntNode *current = other.dummyTail->prev;
    while (current != other.dummyHead)
    {
        push_front(current->data);
        current = current->prev;
    }
}

IntList& IntList::operator=(const IntList &other)
{
    if (this == &other) // Check for self-assignment
        return *this;

    while (!empty())    // Clear current list
        pop_front();

    IntNode *current = other.dummyTail->prev;
    while (current != other.dummyHead)
    {
        push_front(current->data);
        current = current->prev;
    }
    return *this; // Return the current object
}

void IntList::push_front(int value)
{
    IntNode *newNode = new IntNode(value);
    newNode->next = dummyHead->next;
    newNode->prev = dummyHead;
    dummyHead->next->prev = newNode;
    dummyHead->next = newNode;
}
void IntList::pop_front()
{
    if (empty()) return; // Do nothing if empty
    IntNode *toDelete = dummyHead->next; // Node to be removed
    dummyHead->next = toDelete->next; // Update dummy head's next
    toDelete->next->prev = dummyHead; // Update the next node's prev
    delete toDelete; // Free memory of the removed node
}
void IntList::push_back(int value)
{
    // ignore this
    value = value; // avoid unused variable warning
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
    // just for demo
    out << "Dummy Head | address: " << rhs.dummyHead << std::endl;
    for (IntNode *current = rhs.dummyHead->next; current != rhs.dummyTail; current = current->next)
        out << "value: " << current->data << " | address: " << current << std::endl;
    out << "Dummy Tail | address: " << rhs.dummyTail << std::endl;
    return out; // Return the output stream
}
void IntList::printReverse() const
{
    //
}