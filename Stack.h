#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "List.h"

template< typename STACKTYPE >
class Stack : private List< STACKTYPE >
{
public:
    void push( const STACKTYPE &data )
    {
        this->insertAtFront( data );
    }

    bool pop( STACKTYPE &data )
    {
        return this->removeFromFront( data );
    }

    bool isStackEmpty() const
    {
        return this->isEmpty();
    }

    void printStack() const
    {
        this->print();
    }
};

#endif // STACK_H_INCLUDED
