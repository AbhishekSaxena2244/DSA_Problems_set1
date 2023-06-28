#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
	int data;
	Node *next;
};

Node *head=NULL;
void Delete(int key)
{
	Node *temp=head,*prev=NULL;
	if(temp==NULL){
	cout<<"List is empty"<<endl;
	return;
    }
    if(temp->data==key){
    	head=temp->next;
    	return;
	}
	while(temp!=NULL && temp->data!=key){
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL){
	cout<<"Node is not present"<<endl;
	return;
    }
    prev->next=temp->next;
}

void printlist(Node *n)
{
	while(n!=NULL){
	cout<<n->data<<" ";
	n=n->next;
    }
}

int main()
{
	Node *second=NULL;
	Node *third=NULL;
	Node *fourth=NULL;
	
	head= new Node();
	second= new Node();
	third= new Node();
	fourth= new Node();
	
	head->data=25;
	head->next=second;
	
	second->data=35;
	second->next=third;
	
	third->data=45;
	third->next=fourth;
	
	fourth->data=55;
	fourth->next=NULL;
	
	printlist(head);
	cout<<endl;
	Delete(35);
	printlist(head);
	return 0;
}
