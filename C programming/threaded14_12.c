#include <stdio.h>
#include <malloc.h>
TBT(struct node *Inorder(struct node *));
struct node
{
    int data;
    struct node *lc, *Rc;
    int lbit, Rbit;
};
int main()
{
    struct node *new1, *Head;
    *Root = NULL;
    int ch;
    while (1)
    {
        new1 = malloc();
        printf("Enter data");
        scanf("%d", (new->data));
        new1->lbit = new->Rbit = 0;
        if (Root == NULL)
        {
            head = (struct node * malloc(size of(struct node)));
            head->data->999;
            head->lc = head->Rc = head;
            head->lbit = head->Rbit = 1;
            new1->lc = new->Rc = head;
            Root = new1;
        }
        else
            TBT(Root, new1)
        printf("do you want to continue");
        scanf("%d", &ch);
        if (ch == 1)
            break;
    }
    inorder(Root)
}
struct node *TBT(struct node *Root, struct node *new1)
{
    if (new1->data < Root->data)
    {
        if (Root->lc != head)
            TBT(Root->lc, new1);
        else
        {
            new1->lc = Root->lc;
            new1->Rc = ROot;
            Root->lc = new1;
            Root->lbit = 1;
        }
        else if (Root->Rc != head)
            TBT(Root->Rc, new1);
        else
        {
            new1->Rc = Root->Rc;
            new1->lc = Root;
            Root->Rc = new1;
            Root->Rbit = 1
        }
    }
}
