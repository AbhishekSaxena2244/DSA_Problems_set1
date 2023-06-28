#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

Node *head=NULL;
void remove(){
	Node *slow,*fast;
	slow=fast=head;
	
	while(fast!=NULL){
		if(slow->data==fast->data)
		fast=fast->next;
		else{
			slow->next=fast;
			slow=fast;
			fast=fast->next;
		}
	}
	if(slow!=fast)
	slow->next=NULL;
}

void printList(Node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main(){
	Node *second=NULL;
	Node *third=NULL;
	Node *fourth=NULL;
	Node *fifth=NULL;
	Node *sixth=NULL;
	Node *seventh=NULL;
	
	head=new Node();
	second=new Node();
	third=new Node();
	fourth=new Node();
	fifth=new Node();
	sixth=new Node();
	seventh=new Node();
	
	head->data=1;
	head->next=second;
	
	second->data=1;
	second->next=third;
	
	third->data=1;
	third->next=fourth;
	
	fourth->data=3;
	fourth->next=fifth;
	
	fifth->data=6;
	fifth->next=sixth;
	
	sixth->data=10;
	sixth->next=seventh;
	
	seventh->data=10;
	seventh->next=NULL;
	
	printList(head);
	cout<<endl;
	remove();
	printList(head);
	return 0;
}
