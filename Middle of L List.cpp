#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};
Node *head=NULL;
void Middle()
{
	Node *fast,*slow;
	fast=slow=head;
	if(head==NULL){
	cout<<"List is empty"<<endl;
	return;
    }
	while(fast!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	cout<<slow->data;
}

void printList(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main()
{
	Node *second=NULL;
	Node *third=NULL;
	Node *fourth=NULL;
	Node *fifth=NULL;
	
	head=new Node();
	second=new Node();
	third=new Node();
	fourth=new Node();
	fifth=new Node();
	
	head->data=20;
	head->next=second;
	
	second->data=30;
	second->next=third;
	
	third->data=40;
	third->next=fourth;
	
	fourth->data=50;
	fourth->next=fifth;
	
	fifth->data=60;
	fifth->next=NULL;
	
	printList(head);
	cout<<endl;
	Middle();
	return 0;
}
