#include "Node.h"

Node::Node()
{
    //This is a bidirectional node which requires a pointer to both the next and previous node.
    next = nullptr;
    pre = nullptr;
    data = 0;
}

Node::Node(int d)
{
    //Parameterized constructor which sets the data to the parameter and sets the next and previous pointers to null.
    next = nullptr;
    pre = nullptr;
    data = d;
}