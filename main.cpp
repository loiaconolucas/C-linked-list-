

#include "SlinkedList.h"
#include <iostream>
#include "SlinkedList.cpp"
using namespace std;
int main() {

    SlinkedList<int> s;

    s.addFront(12);
    s.addFront(7); 
    s.addFront(16);
    s.addFront(1);

    while (!s.empty())
        cout << s.removeFront() << " ";
};