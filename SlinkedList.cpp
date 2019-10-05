#include "SlinkedList.h"

#include "SNode.h"


template <typename E>
SlinkedList<E>::SlinkedList()				// constructor
        : head(NULL) { }

template <typename E>
bool SlinkedList<E>::empty() const			// is list empty?
{ return head == NULL; }

template <typename E>
const E& SlinkedList<E>::front() const		// return front element
{ return head->elem; }

template <typename E>
SlinkedList<E>::~SlinkedList() 			// destructor
{ while (!empty()) removeFront(); }


template <typename E>
void SlinkedList<E>::addFront(const E& e) {		// add to front of list
    SNode<E>* v = new SNode<E>;				// create new node
    v->elem = e;					// store data
    v->next = head;					// head now follows v
    head = v;						// v is now the head
}


template <typename E>
E SlinkedList<E>::removeFront() {			// remove front item
    SNode<E>* old = head;				// save current head
    E ret = head->elem;
    head = old->next;					// skip over old head
    delete old;						// delete the old head
    return ret;
}