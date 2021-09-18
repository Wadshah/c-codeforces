#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll     long long int 
#define inf     1e18
#define mod    1000000007

const int N=1e5+5;

void file_i_o(){

ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    #ifndef ONLINE_JUDGE
freopen("inputf.in", "r", stdin);
freopen("output.in", "w", stdout);
#endif
}
int main(int argc ,char const *argv[]){
 clock_t begin =clock();  
 file_i_o();

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
 	cout<<arr2[1];
 		int d=arr2[0]-arr[0];
 	    cout<<d<<endl;
 	    
}

#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

