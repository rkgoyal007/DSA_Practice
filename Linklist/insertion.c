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

//case 1
struct Node* insertAtFirst(struct Node *head,int data)
{
    struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

//case 2
struct Node* insertInbetween(struct Node *head,int data,int index)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

//case 3
insertAtEnd(struct Node *head,int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

//case 4
insertAfterNode(struct Node *head,struct Node* prevNode,int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    ptr->next=prevNode->next;
    prevNode->next=ptr;


    return head;
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
    printf("linked list before insertion:\n");
    traversal(head);
    printf("linked list after insertion:\n");
    //head = insertAtFirst(head,56);
    //head = insertInbetween(head,56,1);
    //head = insertAtEnd(head,56);
    head = insertAfterNode(head,second,18);
    traversal(head);

    return 0;
}
