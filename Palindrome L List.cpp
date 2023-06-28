#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Node{
    public:
	char data;
	Node *next;
};

Node *head=NULL;
bool check()
{
	Node *temp=head;
	stack<int>s;
	while(temp!=NULL)
	{
		s.push(temp->data);
		temp=temp->next;
	}
	
	while(head!=NULL)
	{
		int i=s.top();
		s.pop();
		if(head->data!=i)
		return false;
		head=head->next;
	}
	return true;
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
	
	head->data='R';
	head->next=second;
	
	second->data='A';
	second->next=third;
	
	third->data='D';
	third->next=fourth;
	
	fourth->data='A';
	fourth->next=fifth;
	
	fifth->data='R';
	fifth->next=NULL;
	
	printlist(head);
	cout<<endl;
	int result=check();
	if(result==1)
	cout<<"List is palindrome";
	else
	cout<<"Not palindrome";
	return 0;
}
