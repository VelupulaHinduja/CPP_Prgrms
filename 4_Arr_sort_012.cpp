#include<iostream>
using namespace std;
int main(){
	int a[100],n,n0=0,n1=0,n2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==0)
			n0++;
		else if(a[i]==1)
			n1++;
		else
			n2++;
	}
	for(int i=0;i<n0;i++){
		a[i]=0;
		//cout<<a[i]<<" ";
	}
	for(int i=0;i<n1;i++){
		a[i+n0]=1;
		//cout<<a[i+n0]<<" ";
	}
	for(int i=0;i<n2;i++){
		a[i+n1+n0]=2;
		//cout<<a[i+n1]<<" ";
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
}
