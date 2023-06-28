//It is also known as BFS Traversal or BFS Pattern
#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;

class Node{
	public:
		int data;
		Node *left,*right;
		
		Node(int val){
			data=val;
			left=right=NULL;
		}
};
Node *root=NULL;

vector<vector<int> >BFS_traversal(Node *root){
	vector<vector<int> >bfs;
	if(root==NULL)
	    return bfs;
	queue<Node *>q;
	q.push(root);
	while(!q.empty()){
		vector<int>current_list;
		int current_size=q.size();
		for(int i=0;i<current_size;i++){
			Node *current=q.front();
			q.pop();
			current_list.push_back(current->data);
			if(current->left!=NULL)
			    q.push(current->left);
			if(current->right!=NULL)
			    q.push(current->right);
		}
		bfs.push_back(current_list);
	}
	return bfs;
}

int main(){
	root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	
	vector<vector<int> >v=BFS_traversal(root);
	for(auto i:v){
		for(auto j:i)
		cout<<j<<" ";
		cout<<endl;
	}
}
