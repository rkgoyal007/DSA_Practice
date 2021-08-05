#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* traversal(struct Node* ptr)
{
    while(ptr->next!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr->prev!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->prev;
    }
    printf("Element:%d",ptr->data);
    return ptr;
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* forth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    forth=(struct Node*)malloc(sizeof(struct Node));
   
    head->data=8;
    head->prev= NULL;
    head->next=second;

    second->data=10;
    second->prev=head;
    second->next=third;

    third->data=12;
    third->prev=second;
    third->next=forth;

    forth->data=14;
    forth->prev=third;
    forth->next=NULL;
    printf("traversal of doubly linkedlist from both side:\n");
    head=traversal(head);
    return 0; 

}