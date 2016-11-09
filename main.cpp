#include <iostream>

#include "Stack.h"

int main()
{
    Stack<int> stackForTest;

    stackForTest.push(132);
    stackForTest.push(258);
    stackForTest.push(654);
    stackForTest.push(846);

    stackForTest.printStack();

    int a;
    stackForTest.pop(a);

    std::cout<< a << std::endl;

    stackForTest.printStack();

    return 0;
}
