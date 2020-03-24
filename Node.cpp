#include "Node.hpp"
#include <string>
using namespace std;

//Constructor
Node::Node(string payload)   //class::constructor
{
    //'this' is a Node*
    this->payload = payload;  
    this->nextNode = 0;                             
}

string Node::getPayload()
{
    return this->payload;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}
void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}
