#ifndef QUEUE_H
#define QUEUE_H

// TODO: Queue 클래스 정의 작성
#include "linked_list.h"

class Queue : public LinkedList
{
    public:
    void push(int data);
    int peek();
    int pop();
    Queue& operator+=(int data);
};
#endif