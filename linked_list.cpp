#include "linked_list.h"
#include <iostream>
// TODO: LinkedList 클래스 구현 작성

LinkedList::LinkedList()
    : size_(0), head_(nullptr)
    {};

void LinkedList::print()
{
    for(int i = 0; i<size_; i++)
    {
        std::cout << head_->value_ << "-->";
        head_ = head_->next_;
    }

    std::cout << std::endl;
}

int LinkedList::get(int index)
{
    for(int i  = 0; i<index; i++)
    {
        head_ = head_->next_;
    }
    return head_->value_;
}

void LinkedList::insert(int index, int value)
{
    Node *newNode = new Node(value);

    Node* cur = head_;
    Node* pre = head_;

    if(index == 1)
    {
        newNode->next_ = head_;
        head_ = newNode;
    }
    else if((size_ -1) == index)
    {
        while(cur != NULL)
        {
            if(cur != head_)
            {
                pre = pre->next_;
            }
            cur = cur->next_;
        }
        
        pre->next_ = newNode;
    }
    else
    {
        for(int i = 0; i< index; i++)
        {
            if(cur != head_)
            {
                pre= pre->next_;
            }
            cur = cur->next_;
        }

        pre->next_ = newNode;
        newNode -> next_ = cur;
    }


    size_++;

}

void LinkedList::remove(int index)
{
    Node *pre = head_;
    Node *cur = head_;

    for(int i = 0; i<index; i++)
    {
        if(cur != head_)
        {
            pre = pre->next_;
        }
        cur = cur ->next_;
    }
    Node *temp = cur;

    pre-> next_ = temp -> next_;

    delete temp;
}


LinkedList::~LinkedList()
{
    Node *current = head_;

    for(int i = 0; i<size_; i++)
    {
        Node* next = current->next_;
        delete current;
        current = next;
    }
    head_ = NULL;
}