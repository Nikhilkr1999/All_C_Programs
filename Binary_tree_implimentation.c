#include<stdio.h>
struct node{
    int data;
    struct node *left,*right;
};

struct node *create(){
    int x;
    struct node *newNode=(struct node * ) malloc (sizeof(struct node));
    printf("ente the data(press -1 to exit)");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newNode->data=x;
    printf("enter the left child of %d",x);
    newNode->left = create();
    printf("enter the right child of %d ", x);
    newNode->right = create();
    return newNode;
}
int main(){
    struct node *root;
    root=0;
    root=create();
}