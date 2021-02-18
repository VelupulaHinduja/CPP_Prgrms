#include<iostream>
using namespace std;
int main(){
	int a[100],b[100],un[200],in[200],n2,k=0,j,l=0,flag=0,n1;
	cin>>n1;
	for(int i=0;i<n1;i++){
		cin>>a[i];
		un[i]=a[i];
	}
	cin>>n2;
	for(int i=0;i<n2;i++){
		cin>>b[i];
	}
	for(int i=0;i<n2;i++){
		flag=0;
		for(j=0;j<n1;j++){
			if(b[i]>=un[j]){
				if(b[i]==un[j])
				{
					in[k++]=b[i];
					flag=1;
					break;
				}
			}
			else{
				break;
			}
		}
		if(flag!=1)
		{
			un[n1+l]=b[i];
			l++;
		}
		
	}
	cout<<"Union  ";
	for(int i=0;i<l+n1;i++)
	{
		cout<<un[i]<<"   ";
	}
	cout<<endl<<"Intersection  ";
	for(int i=0;i<k;i++){
		cout<<in[i]<<"  ";
	}
}
	
	
