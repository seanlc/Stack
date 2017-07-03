#include <iostream>

using namespace std;

class Stack {
  public:
    Stack()
    : buf (new int [100]), top (-1)
    {}
    Stack(int cap)
    : buf (new int [cap]), top (-1)
    {}
    ~Stack()
    {
        delete [] buf;
    }
    int pop()
    {
        return buf[top--];
    }
    void push(int item)
    {
        buf[++top] = item;
    }
    int peek()
    {
        return buf[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void clear()
    {
        for(int i = top; i >= 0; --i)
	    pop();
    }
    void print()
    {
        for(int i = top; i >= 0; i--)
 	    cout << "Ele: " << buf[i] << endl;
    }
  private:
    int * buf;
    int top;
};
