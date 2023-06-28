#include<bits/stdc++.h>
using namespace std;

//MY CODE

void search(int ar1[],int ar2[],int ar3[],int n1,int n2,int n3)
{
	int i,j,k;
	i=j=k=0;
	int temp[k];
	while(i<n1 && j<n2)
	{
		if(ar1[i]<ar2[j])
		i++;
		else if(ar1[i]>ar2[j])
		j++;
		else
		{
		    temp[k]=ar2[j];
		    i++;
		    j++;
		    k++;
		}
	}
	i=k=0;
	while(i<n3)
	{
		if(ar3[i]<temp[k])
		i++;
		else if(ar3[i]>temp[k])
		k++;
		else
		{
		    cout<<temp[k]<<" ";
		    i++;
		    k++;
	    }
	}
	cout<<endl<<endl;
}
//OPTIMIZED

void searching(int ar1[],int ar2[],int ar3[],int n1,int n2,int n3)
{
	int i,j,k;
	i=j=k=0;
	int temp[k];
	while(i<n1 && j<n2 && k<n3)
	{
		if(ar1[i]==ar2[j] && ar2[j]==ar3[k])
		{
			cout<<ar1[i]<<" ";
			i++;
			j++;
			k++;
		}
		else if(ar1[i]<ar2[j])
		i++;
		else if(ar2[j]<ar3[k])
		j++;
		else
		k++;
    }
}

int main()
{
	int n1=6,n2=5,n3=8,ar1[n1]={1,5,10,20,40,80},ar2[n2]={6,7,20,80,100},ar3[n3]={3,4,15,20,30,70,80,120};
	search(ar1,ar2,ar3,n1,n2,n3);
	searching(ar1,ar2,ar3,n1,n2,n3);
	return 0;
}
