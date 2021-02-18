#include<iostream>
using namespace std;
int main(){
	int a[100],n,k=0,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	x=a[0];
	for(int i=(n-1);i>=0;i--)
	{
		
		a[(i+1)%n]=a[i];
		
	}
	a[1]=x;
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
}
	
