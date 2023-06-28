#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
};

void printlist(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main()
{
	Node *head=NULL;
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
	return 0;
}
