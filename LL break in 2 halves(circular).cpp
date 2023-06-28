#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};
Node *head=NULL,*head2=NULL;

void BreakList(Node *head){
	Node *fast,*slow;
	fast=slow=head;
	fast=fast->next;
	while(fast!=head && fast->next!=head){
		fast=fast->next->next;
		slow=slow->next;
	}
	head2=fast=slow->next;
	slow->next=head;
	while(fast->next!=head)
	    fast=fast->next;
	fast->next=head2;
}

void PrintList(Node *head){
	Node *temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	while(temp!=head);
}

int main(){
	
	Node *second=NULL;
	Node *third=NULL;
	Node *fourth=NULL;
	Node *fifth=NULL;
	Node *sixth=NULL;
	
	head=new Node();
	second=new Node();
	third=new Node();
	fourth=new Node();
	fifth=new Node();
	sixth=new Node();
	
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=fifth;
	
	fifth->data=50;
	fifth->next=head;
	
//	sixth->data=60;
//	sixth->next=head;
	
	PrintList(head);
	BreakList(head);
	cout<<endl<<"List1: ";
	PrintList(head);
	cout<<endl<<"List2: ";
	PrintList(head2);
}
