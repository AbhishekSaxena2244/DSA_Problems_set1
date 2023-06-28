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

void AtEnd(Node **head,int value){
	Node *temp=*head;
	while(temp->next!=NULL)
	    temp=temp->next;
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	temp->next=new_node;
	new_node->next=NULL;
	new_node->prev=temp;
}

void NodeBefore(Node **head,int value_before,int value){
	Node *temp=*head;
	while(temp->data!=value_before)
		temp=temp->next;
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	if(temp->prev!=NULL)
	    temp->prev->next=new_node;
	else
	    *head=new_node;
	new_node->next=temp;
	new_node->prev=temp->prev;
	temp->prev=new_node;
	
}

void NodeAfter(Node **head,int value_after,int value){
	Node *temp=*head;
	while(temp->data!=value_after)
		temp=temp->next;
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=temp->next;
	new_node->prev=temp;
	if(temp->next!=NULL)
	    temp->next->prev=new_node;
	temp->next=new_node;
}

void DeleteNode(Node **head,int value){
	Node *temp=*head;
	while(temp->data!=value)
	    temp=temp->next;
	if(temp->prev!=NULL)
	    temp->prev->next=temp->next;
	else
	    (*head)=(*head)->next;
	if(temp->next!=NULL)    
	    temp->next->prev=temp->prev;
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
	AtBegin(&h,3);
	AtBegin(&h,2);
	AtBegin(&h,1);
	cout<<"At Begin: ";
	PrintList(h);
	
	AtEnd(&h,8);
	AtEnd(&h,9);
	AtEnd(&h,10);
	cout<<endl<<endl<<"At End: ";
	PrintList(h);
	
	NodeBefore(&h,8,5);
	NodeBefore(&h,5,4);
	NodeBefore(&h,1,0);
	cout<<endl<<endl<<"Before Node: ";
	PrintList(h);
	
	NodeAfter(&h,5,6);
	NodeAfter(&h,6,7);
	NodeAfter(&h,10,11);
	cout<<endl<<endl<<"After Node: ";
	PrintList(h);
	
	DeleteNode(&h,0);
	DeleteNode(&h,5);
	DeleteNode(&h,11);
	cout<<endl<<endl<<"After Deletion: ";
	PrintList(h);
}
