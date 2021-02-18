#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[100],n,k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	sort(a,a+n);
	cout<<a[k-1]<<"   "<<a[n-k];
	
}
