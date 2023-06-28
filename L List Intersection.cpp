#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

void printList(Node *n)
{
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

void insert(Node **head,int value)
{
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=*head;
	*head=new_node;
}

Node *intersection(Node *h1,Node *h2)
{
	Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;
    
	while(h1!=NULL && h2!=NULL){
		if(h1->data==h2->data){
			insert((&tail->next), h1->data);
            tail = tail->next;
			h1=h1->next;
			h2=h2->next;
		}
		else if(h1->data<h2->data)
		h1=h1->next;
		else
		h2=h2->next;
	}
	return (dummy.next);
}

int main()
{
	Node *head1=NULL,*head2=NULL,*intersect=NULL;
	insert(&head1,6);
	insert(&head1,4);
	insert(&head1,3);
	insert(&head1,2);
	insert(&head1,1);
	
	insert(&head2,8);
	insert(&head2,6);
	insert(&head2,4);
	insert(&head2,2);
	
	printList(head1);
	cout<<endl;
	printList(head2);
	cout<<endl;
	intersect=intersection(head1,head2);
	printList(intersect);
	return 0;
}
