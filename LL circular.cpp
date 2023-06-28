#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};
Node *head=NULL;

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
	
	head=new Node();
	second=new Node();
	third=new Node();
	fourth=new Node();
	fifth=new Node();
	
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
	
	PrintList(head);
}
