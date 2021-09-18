#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n,m;
	cin>>n>>m;
	if(m==n){
		cout<<max(n,m)<<" "<<3<<endl;
		
	}	
	else{
		cout<<max(n,m)<<" "<<1<<endl;
	}
	}
}
