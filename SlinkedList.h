//
// Created by Lucas Loiacono on 9/21/18.
//

#ifndef LINKEDLISTFOR373_SlinkedLIST_H
#define LINKEDLISTFOR373_SlinkedLIST_H
#include "SNode.h"


template <typename E>
class SlinkedList {

                                // a singly linked list
    public:
        SlinkedList();				// empty list constructor
        ~SlinkedList();				// destructor
        bool empty() const;				// is list empty?
        const E& front() const;			// return front element
        void addFront(const E& e);			// add to front of list
        E removeFront();				// remove front item list
    private:
        SNode<E>* head;

};

#endif //LINKEDLISTFOR373_SlinkedLIST_H
