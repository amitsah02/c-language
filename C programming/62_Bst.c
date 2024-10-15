#include<stdio.h>
#include <malloc.h>
struct node{
    int data ;
    struct node*left;
struct node*right;
};
struct node* createNode(int data)
{struct node *n;
n=(struct node*)malloc(sizeof(struct node));
n->data=data;
n->left=NULL;
n->right=NULL;
return n;
}
void preorder(struct node*root)
{if(root!=NULL){
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
}
int main(){
    struct node*p=createNode(4); 
}