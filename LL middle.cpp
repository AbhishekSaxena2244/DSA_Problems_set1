#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

void AtBegin(Node **head,int value){
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=*head;
	*head=new_node;
}

void PrintList(Node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

void MiddleOfList(Node *head){
	Node *fast=head;
	Node *slow=head;
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	cout<<slow->data;
}

int main(){
	Node *h=NULL;
	
	AtBegin(&h,5);
	AtBegin(&h,4);
	AtBegin(&h,3);
	AtBegin(&h,2);
	AtBegin(&h,1);
	PrintList(h);
	
	cout<<endl<<"Middle element is: ";
	MiddleOfList(h);
}
