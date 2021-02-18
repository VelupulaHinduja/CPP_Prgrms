#include<iostream>
using namespace std;
int main(){
	int a[100],n,l=0,m,sum=0,maxsum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if((a[i]+sum)>0)  
		{
			sum+=a[i];
			if(maxsum<=(a[i]+sum)){
				maxsum=sum;
				m=i;
			}
				
		}
		else{
			l=i+1;
			sum=0;
		}
	}
	cout<<l<<"  "<<m<<"  "<<maxsum;
}
