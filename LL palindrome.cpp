#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

void AtBegin(Node **head,int value){
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=*head;
	*head=new_node;
}

void PrintList(Node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

bool CheckPalindrome(Node *head){
	Node *temp=head;
	stack<int>s;
	while(temp!=NULL){
		s.push(temp->data);
		temp=temp->next;
	}
	while(head!=NULL){
		int i=s.top();
		s.pop();
		if(i!=head->data)
		return false;
		head=head->next;
	}
	return true;
}

int main(){
	Node *h=NULL;

    cout<<"At Begin: ";
	AtBegin(&h,1);
	AtBegin(&h,2);
	AtBegin(&h,3);
	AtBegin(&h,2);
	AtBegin(&h,1);
    PrintList(h);
    
    cout<<endl;
    int palindrome=CheckPalindrome(h);
    cout<<palindrome;
}
