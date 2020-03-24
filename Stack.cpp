#include "Stack.hpp"
#include <iostream>
#include <string>
using namespace std;

Stack::Stack()
{
    this->top = 0;
}

void Stack::push(string payload)
{
    Node* n = new Node(payload);    
    
    if(!this->top)
    {
        this->top = n; 
    }
    else
    {
        n->setNextNode(this->top); 
        this->top = n; 
    }
    //this->count++;
}

string Stack::peek()
{
    return this->top->getPayload();     
}

string Stack::pop()
{
    Node* nodeToReturn = this->top;    //locate the node at the front of the list
    this->top = this->top->getNextNode(); //set top to the front's nextNode
    string val = nodeToReturn->getPayload(); //save the payload of the first node
    nodeToReturn->setNextNode(0);
    delete nodeToReturn;    //free up the memory space we were using
    //this->count--;
    return val; //output the payload value we saved
}

string Stack::selectDisc()
{
    if(this->top)
    {
        string disc = this->pop();
        //std::cout<< "Disc has been selected.\n";
        return disc;
    }
    else
    {
        std::cout<<"ILLEGAl MOVE"<<"\n";
    }
}

void Stack::moveDisk(string disc)
{
    this->push(disc);
}

void Stack::display()
{
    std::cout<< "   |   " << "\n";
    std::cout<< "   |   " << "\n";


    if(this->top)
    {
        Node* currNode = this->top;
        while(currNode)
        {
            std::cout<<"  "<<currNode->getPayload() << "\n";
            currNode = currNode->getNextNode();
        }
        std::cout <<"=======" << "\n" << "\n";
    }
    else
    {
        std::cout<< "   |   " << "\n";
        std::cout<< "   |   " << "\n";
        std::cout<< "   |   " << "\n";
        std::cout<< "=======" << "\n" << "\n";

    }
    
}