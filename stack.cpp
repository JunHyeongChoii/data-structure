#include "stack.h"

// TODO: Stack 클래스 구현 작성
void Stack::push(int data)
{
    LinkedList::insert(LinkedList::size_,data);
}

int Stack::pop()
{
    int p = LinkedList::remove(LinkedList::size_);
    return p;
}

int Stack::peek()
{
    LinkedList::get(LinkedList::size_);
}