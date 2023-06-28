#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
	int data;
	Node *next;
};

Node *head=NULL;
void printlist(Node *n)
{
	while(n!=NULL){
	cout<<n->data<<" ";
	n=n->next;
    }
}

void swapp(int x,int y)
{
	Node *curr1,*curr2,*prev1,*prev2;
	curr1=curr2=head;
	prev1=prev2=NULL;
	
	if(x==y)
	return;
	
	while(curr1->data!=x){
		prev1=curr1;
		curr1=curr1->next;
	}
	while(curr2->data!=y)
	{
		prev2=curr2;
		curr2=curr2->next;
	}
	if(curr1==NULL || curr2==NULL)
	return;
	if(prev1!=NULL)
	prev1->next=curr2;
	else
	head=curr2;
	
	if(prev2!=NULL)
	prev2->next=curr1;
	else
	head=curr1;
	
	Node*temp=curr2->next;
	curr2->next=curr1->next;
	curr1->next=temp;
}

int main()
{
	Node *second=NULL;
	Node *third=NULL;
	Node *fourth=NULL;
	Node *fifth=NULL;
	Node *sixth=NULL;
	
	head= new Node();
	second= new Node();
	third= new Node();
	fourth= new Node();
	fifth= new Node();
	sixth= new Node();
	
	head->data=10;
	head->next=second;
	
	second->data=15;
	second->next=third;
	
	third->data=12;
	third->next=fourth;
	
	fourth->data=13;
	fourth->next=fifth;
	
	fifth->data=20;
	fifth->next=sixth;
	
	sixth->data=14;
	sixth->next=NULL;
	
	printlist(head);
	cout<<endl;
	swapp(10,20);
	printlist(head);
	return 0;
}
