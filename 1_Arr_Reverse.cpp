#include<iostream>
using namespace std;
int main(){
	int a[100],n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<(n/2);i++)
	{
		x=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=x;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}
