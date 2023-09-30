#ifndef Node_h
#define Node_h

struct Node
{
    float data;
    Node* next;
};

typedef Node* TList;

void init(TList&);

void addToHead(TList&, float);

void addAfterNode(TList, float);

bool is_empty(TList);

void print(TList);

void deleteFromHead(TList&);

void clear(TList&);

int countMaxElements(TList);

#endif


