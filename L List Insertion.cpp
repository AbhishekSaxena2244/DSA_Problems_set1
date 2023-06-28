#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
};

Node *head=NULL;

void printlist(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}

/*
void insertAtBegin(int value)
{
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=head;
	head=new_node;
}                        */

/*
void insertAtEnd(int value)
{
	Node* temp=head;
	Node* new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=NULL;
	
	if(head==NULL)
	head=new_node;
	else{
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=new_node;
	}
}                         */

void insertAfter(int nodeAfter,int value)
{
	Node* temp=head;
	
	if(head==NULL)
	cout<<"The node cant be inserted";
	else{
		while(temp->data!=nodeAfter){
		temp=temp->next;
		if(temp==NULL)
		{
		cout<<"cant be inserted....Final List"<<endl;
		return;
		}
	}
		
		Node* new_node=(Node*)malloc(sizeof(Node));
		new_node->data=value;
		new_node->next=temp->next;
		temp->next=new_node;
	}
}

int main()
{
	Node *second=NULL;
	Node *third=NULL;
	
	head=new Node();
	second=new Node();
	third=new Node();
	
	head->data=15;
	head->next=second;
	
	second->data=25;
	second->next=third;
	
	third->data=35;
	third->next=NULL;
	
	printlist(head);
	cout<<endl;
	
/*	insertAtBegin(5);
	printlist(head);
	cout<<endl;        */
	
/*	insertAtEnd(45);
	printlist(head);
	cout<<endl;        */
	
	insertAfter(25,55);
	printlist(head);
	return 0;
}
