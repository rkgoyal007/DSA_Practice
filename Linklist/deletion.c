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


//case 1:delete first element of linklist
struct Node* deleteFirst(struct Node* head)
{
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//case2:delete value at 2nd index
struct Node* deleteAtIndex(struct Node* head,int index)
{
    struct Node* p=head;
    struct Node* q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

//case3:delete the last element
struct Node* deleteAtLast(struct Node* head)
{
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

//case2:delete element of given value
struct Node* deleteAtValue(struct Node* head,int value)
{
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data == value)
    p->next=q->next;
    free(q);
    return head;
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* forth;

    //Allocate memory of nodes in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth=(struct Node*)malloc(sizeof(struct Node));

    //link first and second node
    head->data=4;
    head->next=second;

    //link  second and third node
    second->data=3;
    second->next=third;

    //terminates the list at the third node
    third->data=8;
    third->next=forth;

    //terminates the list at fourth node
    forth->data=1;
    forth->next=NULL;
    printf("Linklist before deletion:\n");
    traversal(head);
    //head = deleteFirst(head);
    //head = deleteAtIndex(head,2);
    //head = deleteAtLast(head);
    head = deleteAtValue(head,8);

    printf("Linklist after deletion:\n"); 
    traversal(head);
    return 0;
}