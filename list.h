#ifndef LIST_H
#define LIST_H

// TODO: List 클래스 정의 작성
#include "linked_list.h"
class List : public LinkedList
{
    
    public:
    void insert(int index, int value);
    int get(int index);
    void remove(int index);

    
    
};
#endif