//
// Created by Lucas Loiacono on 9/21/18.
//

#ifndef LINKEDLISTFOR373_SNODE_H
#define LINKEDLISTFOR373_SNODE_H

template <typename E>
class SNode {
public:
    E elem;
    SNode<E> *previous;
    SNode<E>* next;

};


#endif //LINKEDLISTFOR373_SNODE_H
