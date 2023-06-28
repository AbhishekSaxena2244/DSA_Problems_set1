#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
	int data;
	Node *next;
};

void printlist(Node *n)
{
	while(n!=NULL){
	cout<<n->data<<" ";
	n=n->next;
    }
}

int main()
{
	Node *head=NULL;
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
	return 0;
}
