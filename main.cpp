#include <iostream>
#include "Stack.h"

void constr_test()
{
    Stack myStack;
    Stack mySecStack(5000);
}

void push_test()
{
    Stack myStack;
    for(int i = 0; i < 50; ++i)
	myStack.push(i);
    myStack.print();
}

void pop_test()
{
    int temp = 0;
    Stack myStack;
    for(int i = 0; i < 50; ++i)
	myStack.push(i);
    for(int i = 0; i < 10; ++i)
    {
        temp = myStack.pop();
	cout << "popped val: " << temp << endl;
    }
    myStack.print();
}

void peek_test()
{
    int temp = 0;
    Stack myStack;
    for(int i = 0; i < 50; ++i)
	myStack.push(i);
    for(int i = 0; i < 10; ++i)
    {
        temp = myStack.peek();
	cout << "peeked val: " << temp << endl;
    }
    myStack.print();
}

void isEmpty_test()
{
    Stack myStack;
    cout << "Stack is empty. isEmpty() return val: " << myStack.isEmpty() << endl;
    for(int i = 0; i < 50; ++i)
	myStack.push(i);
    cout << "Stack is not empty. isEmpty() return val: " << myStack.isEmpty() << endl;

}

void clear_test()
{
    Stack myStack;
    for(int i = 0; i < 50; ++i)
	myStack.push(i);
    myStack.clear();
    cout << "After clear() isEmpty() returns: " << myStack.isEmpty() << endl;
}

int main()
{
//    constr_test();
//    push_test();
//    pop_test();
//    peek_test();
//    isEmpty_test();
//    clear_test();
    return 0;
}
