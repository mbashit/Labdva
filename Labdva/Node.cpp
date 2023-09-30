#include "Node.h"
#include <iostream>

void init(TList& head)
{
    head = nullptr;
}

void addToHead(TList& head, float elem)
{
    TList p = new Node;
    p->data = elem;
    p->next = head;
    head = p;
}

void addAfterNode(TList pNode, float elem)
{
    TList p = new Node;
    p->data = elem;
    p->next = pNode->next;
    pNode->next = p;
}

bool is_empty(TList head)
{
    return (head == nullptr);
}

void print(TList list)
{
    TList runner = list;
    while (runner != nullptr)
    {
        std::cout << runner->data << std::endl;
        runner = runner->next;
    }
}

void deleteFromHead(TList& head)
{
    if (is_empty(head))
        return;

    TList p = head;
    head = head->next;
    p->next = nullptr;
    delete p;
    p = nullptr;
}

void clear(TList& head)
{
    while (!is_empty(head))
        deleteFromHead(head);
}

int countMaxElements(TList head)
{
    if (is_empty(head))
        return 0;

    float max = head->data;
    int count = 1;

    TList runner = head->next;

    while (runner != nullptr)
    {
        if (runner->data > max)
        {
            max = runner->data;
            count = 1;
        }
        else if (runner->data == max)
        {
            count++;
        }

        runner = runner->next;
    }

    return count;
}
