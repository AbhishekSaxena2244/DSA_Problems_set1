#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
	int data;
	Node *next;
};
Node *head=NULL;
void findNode(int key)
{
	Node *fast,*slow;
	fast=slow=head;
	for(int i=1;i<key;i++)
	fast=fast->next;
	if(fast==NULL)
	cout<<"Given node is not present";
	else{
	while(fast->next!=NULL){
		fast=fast->next;
		slow=slow->next;
	}
	cout<<slow->data;
    }
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
	Node *fifth=NULL;
	
	head= new Node();
	second= new Node();
	third= new Node();
	fourth= new Node();
	fifth= new Node();
	
	head->data=25;
	head->next=second;
	
	second->data=35;
	second->next=third;
	
	third->data=45;
	third->next=fourth;
	
	fourth->data=55;
	fourth->next=fifth;
	
	fifth->data=65;
	fifth->next=NULL;
	
	printlist(head);
	cout<<endl;
	findNode(4);
	return 0;
}
