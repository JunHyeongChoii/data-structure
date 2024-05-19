#include "queue.h"

// TODO: Queue 클래스 구현 작성

void Queue::push(int data)
{
    LinkedList::insert(LinkedList::size_,data);
}

int Queue::peek()
{
    return LinkedList::get(0);

}

int Queue::pop()
{
    int pop_value =LinkedList::get(0);
    LinkedList::remove(0);
    return pop_value;
}

Queue& Queue::operator+=(int data)
{
    push(data);
    return *this;
}