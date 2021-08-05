#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node *head)
{
    struct Node* ptr=head;
    
    do{
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head); 
}

//incertion at circular ll head
struct Node* insertAtFirst(struct Node* head,int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    while(p->next!=head)
    {
     p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
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
    head->data=7;
    head->next=second;

    //linl second and third node
    second->data=11;
    second->next=third;

    //terminates the list at the third node
    third->data=8;
    third->next=forth;

    //terminates the list at fourth node
    forth->data=1;
    forth->next=head;
    printf("ll before operation: \n");
    traversal(head);

    head=insertAtFirst(head,2);

    printf("ll after operation: \n");
    traversal(head);

    return 0;
}