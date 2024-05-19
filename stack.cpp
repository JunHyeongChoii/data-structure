#include "stack.h"

// TODO: Stack 클래스 구현 작성
void Stack::push(int data)
{
    LinkedList::insert(LinkedList::size_,data);
}

int Stack::pop()
{
    int pop_value = LinkedList::get(LinkedList::size_);
    LinkedList::remove(LinkedList::size_);

    return pop_value;
    
}

int Stack::peek()
{
    return LinkedList::get(LinkedList::size_);
}

Stack& Stack::operator+=(int data)
{
    push(data);
    return *this;
}