#include<bits/stdc++.h>
#include<list>
using namespace std;

int Eliminate(int n,int k){
	list<int>l;
	for(int i=0;i<n;i++)
		l.push_back(i);
		
	auto itr=l.begin();
	while(l.size()>1){
		for(int i=1;i<k;i++){
			itr++;
			if(itr==l.end())
			    itr=l.begin();
		}
		itr=l.erase(itr);
		if(itr==l.end())
			itr=l.begin();
	}
	return l.front();
}

int main(){
	int n=6,k=3;
	cout<<Eliminate(n,k);
	return 0;
}
