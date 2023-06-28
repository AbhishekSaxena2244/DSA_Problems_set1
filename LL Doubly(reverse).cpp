#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next,*prev;
};

void AtBegin(Node **head,int value){
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=*head;
	new_node->prev=NULL;
	if((*head)!=NULL)
	(*head)->prev=new_node;
	(*head)=new_node;
}

void ReverseList(Node **head){
	Node *slow=NULL,*fast=*head;
	while(fast!=NULL){
	    slow=fast->prev;
	    fast->prev=fast->next;
	    fast->next=slow;
	    fast=fast->prev;
	}
	if(slow!=NULL)
	(*head)=slow->prev;
}

void PrintList(Node *n){
	Node *last=n;
	cout<<endl<<"Forward ";
	while(n!=NULL){
		cout<<n->data<<" ";
		last=n;
		n=n->next;
	}
	cout<<endl<<"Reversed ";
	while(last!=NULL){
		cout<<last->data<<" ";
		last=last->prev;
	}
}

int main(){
	Node *h=NULL;
	AtBegin(&h,4);
	AtBegin(&h,3);
	AtBegin(&h,2);
	AtBegin(&h,1);
	cout<<"At Begin: ";
	PrintList(h);
	
	cout<<endl<<endl<<"Reversed List: ";
	ReverseList(&h);
	PrintList(h);
}
