#include <stdio.h>
#include <malloc.h>
struct node *newnode(int) void traverse(struct node *) struct node
{
    int data;
    struct node *Root;
    Root = newnode(3);
    Root->lc = newnode(2);
    Root->Rc = newnode(5);
    Root->lc->lc = newnode(0);
    struct node *new node(intd)
    {
        struct node *new1;
        new1 = ((struct node) * (malloc(size of struct node)))
                   new1->data = d;
        new1->1c = new1->rc = NULL;
        return new1;
    }
    void traverse(struct node *Root)
    {
        if (Root != NULL)
        {
            traverse(Root->lc)
                printf("%d", Root->data);
            traverse(Root->Rc);
        }
        else
        {
            Root = new node(-1);
            printf("%d", Root->data);
        }
    }
