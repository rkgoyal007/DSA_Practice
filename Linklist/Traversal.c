#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node *ptr)
{
    while(ptr!=NULL){
    printf("Elements:%d\n",ptr->data);
    ptr = ptr->next;
    }
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;

    //Allocate memory of nodes in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //link first and second node
    head->data=7;
    head->next=second;

    //linl second and third node
    second->data=11;
    second->next=third;

    //terminates the list at the third node
    third->data=14;
    third->next=NULL;

    traversal(head);

    return 0;
}
