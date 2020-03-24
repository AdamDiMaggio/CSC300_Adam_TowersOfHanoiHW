#include "Stack.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Stack* tower1 = new Stack();
    Stack* tower2 = new Stack();
    Stack* tower3 = new Stack();

    tower1->push("*****");
    tower1->push("****");
    tower1->push("***");

    tower1->display();
    tower2->display();
    tower3->display();
    std:cout<<"/////////////////////////////////////"<<"\n";

    tower3->moveDisk(tower1->selectDisc());
    tower2->moveDisk(tower1->selectDisc());
    tower2->moveDisk(tower3->selectDisc());
    tower3->moveDisk(tower1->selectDisc());
    tower1->moveDisk(tower2->selectDisc());
    tower3->moveDisk(tower2->selectDisc());
    tower3->moveDisk(tower1->selectDisc());

    tower1->display();
    tower2->display();
    tower3->display();

    return 0;   
}