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

void PrintList(Node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

void PartitionList(Node *head,int value){
	Node *List1,*List2,*temp1,*temp2;
	List1->data=List2->data=0;
	List1->next=List2->next=NULL;
	temp1=List1,temp2=List2;
	while(head!=NULL){
		if(head->data<value){
			Node *new_node=(Node*)malloc(sizeof(Node));
			new_node->data=head->data;
			new_node->next=NULL;
			temp1->next=new_node;
			temp1=temp1->next;
		}
		else{
			Node *new_node=(Node*)malloc(sizeof(Node));
			new_node->data=head->data;
			new_node->next=NULL;
			temp2->next=new_node;
			temp2=temp2->next;
		}
	}
	temp1->next=List2->next;
	List1=List1->next;
	
	while(List1!=NULL){
		cout<<List1->data<<" ";
		List1=List1->next;
	}
}

int main(){
	Node *h=NULL;

    cout<<"At Begin: ";
	AtBegin(&h,2);
	AtBegin(&h,5);
	AtBegin(&h,2);
	AtBegin(&h,3);
	AtBegin(&h,4);
	AtBegin(&h,1);
    PrintList(h);
    
    cout<<endl<<"List after partition and arrangement: ";
	PartitionList(h,3);
}
