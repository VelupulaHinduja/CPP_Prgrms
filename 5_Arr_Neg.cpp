#include<iostream>
using namespace std;
int main(){
	int a[100],n,k=0,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]<0)
		{
			x=a[k];
			a[k]=a[i];
			a[i]=x;
			k++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}
