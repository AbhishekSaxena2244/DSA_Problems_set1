#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};
Node *head=NULL;

void AtBegin(int value){
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=head;
	head=new_node;
}

int LoopNodes(){
	int count=1;
	Node *slow=head;
	Node *fast=head;
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
		fast=fast->next;
		break;
    }
	}
	while(fast!=slow){
		fast=fast->next;
		count+=1;
	}
	return count;
}

int main(){
	Node *second=NULL;
    Node *third=NULL;
    Node *fourth=NULL;
    Node *fifth=NULL;
    Node *sixth=NULL;
    Node *seventh=NULL;
    Node *eighth=NULL;
    
    head=new Node();
	second=new Node();
    third=new Node();
    fourth=new Node();
    fifth=new Node();
    sixth=new Node();
    seventh=new Node();
    eighth=new Node();
    
    head->data=10;
    head->next=second;
    
    second->data=20;
    second->next=third;
    
    third->data=30;
    third->next=fourth;
    
    fourth->data=40;
    fourth->next=fifth;
    
    fifth->data=50;
    fifth->next=sixth;
    
    sixth->data=60;
    sixth->next=seventh;
    
    seventh->data=70;
    seventh->next=eighth;
    
    eighth->data=80;
    eighth->next=third;
    
	int loop=LoopNodes();
	cout<<loop;
}
