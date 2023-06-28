#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

void Atbegin(Node **head,int value)
{
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=*head;
	*head=new_node;
}

void AfterNode(Node *prev,int value)
{
	Node *new_node=(Node*)malloc(sizeof(Node));
	if(prev==NULL)
	return;
	new_node->data=value;
	new_node->next=prev->next;
	prev->next=new_node;
}

void AtEnd(Node **head,int value)
{
	Node *new_node=(Node*)malloc(sizeof(Node));
	Node *last=*head;
	new_node->data=value;
	new_node->next=NULL;
	
	if(*head==NULL){
		*head=new_node;
		return;
	}
	while(last->next!=NULL)
		last=last->next;
	last->next=new_node;	
}

void printList(Node *n)
{
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main()
{
	Node *h=NULL;
	Atbegin(&h,7);
	Atbegin(&h,6);
	Atbegin(&h,3);
	printList(h);
	cout<<endl<<"At begin"<<endl;
	Atbegin(&h,2);
	Atbegin(&h,1);
	printList(h);
	
	cout<<endl<<"After node"<<endl;
	
	AfterNode(h->next->next,4);
	AfterNode(h->next->next->next,5);
	printList(h);
	
	cout<<endl<<"At end"<<endl;
	
	AtEnd(&h,8);
	AtEnd(&h,9);
	AtEnd(&h,10);
	printList(h);
	return 0;
}
