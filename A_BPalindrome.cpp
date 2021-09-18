#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main() {

int t;
 cin>>t;
 while(t--){
 int n;
 	cin>>n;
 	int arr[n+1],arr2[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
 	}
 	sort(arr,arr+n);
 	for(int i=0;i<n-1;i++){
 		cin>>arr2[i];
 	}
 	sort(arr2,arr2+n-1);
 	int d=arr2[0]-arr[0];
 	cout<<d<<endl;
 	
 	}
}
