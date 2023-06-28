#include<bits/stdc++.h>
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

void AfterNode(Node *head,int valueAftr,int value){
	if(head==NULL){
	cout<<"Node can't be inserted";
	return;
    }
    else{
    	while(head->data!=valueAftr)
    		head=head->next;
    	Node *new_node=(Node*)malloc(sizeof(Node));
    	new_node->data=value;
		new_node->next=head->next;
		head->next=new_node;
	}
}

void AtEnd(Node **head,int value){
	Node *temp=*head;
	while(temp->next!=NULL)
	    temp=temp->next;
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->data=value;
	new_node->next=NULL;
	temp->next=new_node;
}

void PrintList(Node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main(){
	Node *h=NULL;

    cout<<"At Begin: ";
	AtBegin(&h,6);
	AtBegin(&h,5);
	AtBegin(&h,2);
	AtBegin(&h,1);
    PrintList(h);

    cout<<endl<<"After Node: ";	
	AfterNode(h,2,3);
	AfterNode(h,3,4);
	PrintList(h);
	
	cout<<endl<<"At End: ";
	AtEnd(&h,7);
	AtEnd(&h,8);
	AtEnd(&h,9);
	PrintList(h);
}
