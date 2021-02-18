#include<iostream>
using namespace std;
int main(){
	int a[100],n,max,min;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	max=a[0];
	min=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<max<<"  "<<min;
}
