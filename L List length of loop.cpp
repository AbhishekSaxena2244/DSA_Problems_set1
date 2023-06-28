#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
	int data;
	Node *next;
};

Node *head=NULL;
void detect()
{
	Node *fast,*slow;
	fast=slow=head;
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
		cout<<"Loop is present"<<endl;
		break;
	    }
	}
	
	slow=slow->next;
	int count=1;
	while(slow!=fast){
		count++;
		slow=slow->next; 
	}
	cout<<count;
}

int main()
{
	int a;
	Node *second=NULL;
	Node *third=NULL;
	Node *fourth=NULL;
	Node *fifth=NULL;
	Node *sixth=NULL;
	Node *seventh=NULL;
	
	head= new Node();
	second= new Node();
	third= new Node();
	fourth= new Node();
	fifth= new Node();
	sixth= new Node();
	seventh= new Node();
	
	head->data=25;
	head->next=second;
	
	second->data=35;
	second->next=third;
	
	third->data=45;
	third->next=fourth;
	
	fourth->data=55;
	fourth->next=fifth;
	
	fifth->data=65;
	fifth->next=sixth;
	
	sixth->data=75;
	sixth->next=seventh;
	
	seventh->data=85;
	seventh->next=third;
	
	detect();
	return 0;
}
