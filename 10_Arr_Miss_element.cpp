#include<iostream>
using namespace std;
int main(){
	int a[100],n,sum=0,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		sum=sum+a[i];
	}
	x=((n+1)*(n+2))/2;
	cout<<"missing elemnet is :"<<x-sum;
}
