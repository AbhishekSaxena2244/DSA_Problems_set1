#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
	int data;
	Node *next;
};

Node *head=NULL;
void remove()
{
	unordered_set<int> s;
	Node *curr=head,*prev=NULL;
	while(curr!=NULL){
		if(s.find(curr->data)!=s.end()){
			prev->next=curr->next;
			delete(curr);
		}
		else{
			s.insert(curr->data);
			prev=curr;
		}
		curr=prev->next;
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
	Node *sixth=NULL;
	Node *seventh=NULL;
	
	head= new Node();
	second= new Node();
	third= new Node();
	fourth= new Node();
	fifth= new Node();
	sixth= new Node();
	seventh= new Node();
	
	head->data=10;
	head->next=second;
	
	second->data=12;
	second->next=third;
	
	third->data=11;
	third->next=fourth;
	
	fourth->data=11;
	fourth->next=fifth;
	
	fifth->data=12;
	fifth->next=sixth;
	
	sixth->data=11;
	sixth->next=seventh;
	
	seventh->data=10;
	seventh->next=NULL;
	
	printlist(head);
	cout<<endl;
	remove();
	printlist(head);
	return 0;
}
