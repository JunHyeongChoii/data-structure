#include "list.h"
#include "linked_list.h"
// TODO: List 클래스 구현 작성


int List::get(int index)
{
    return LinkedList::get(index);
}
void List::insert(int index, int value)
{
    LinkedList::insert(index, value);
}
void List::remove(int index)
{
    LinkedList::remove(index);
}