#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

Node* swapPairs(Node* head) {

    Node *curr= head, *next = NULL, *prev = NULL, *next2 = NULL;
    while(curr && curr->next){
        next = curr->next;
        if(prev == NULL)
            head = next;
        else{
            prev->next = next;
        }
        next2 = next->next;
        next->next = curr;
        curr->next = next2;
        prev = curr;
        curr = next2;
    }
    return head;
}


void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);	

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

void printList(Node *node)
{
	int count = 0;
	while(node != NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
		count++;
	}
}

int main(void)
{
	Node* head = NULL;
	int i;
	for(i = 20; i > 0; i--)
	push(&head, i);

	cout<<"Given linked list \n";
	printList(head);
	head = swapPairs(head);

	cout<<"\n Modified Linked list \n";
	printList(head);
	return(0);
}


