#include "stack.h"

// TODO: Stack 클래스 구현 작성
void Stack::push(int data)
{
    LinkedList::insert(LinkedList::size_,data);
}

int Stack::pop()
{
    LinkedList::remove(LinkedList::size_);

    return LinkedList::get(LinkedList::size_);
    
}

int Stack::peek()
{
    return LinkedList::get(LinkedList::size_);
}