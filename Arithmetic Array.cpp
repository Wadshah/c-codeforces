#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll     long long int 
#define inf     1e18



void file_i_o(){

ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main(){
 
 file_i_o();



int t;
cin>>t;
while(t--){
	ll n,sum=0,number;
	cin>>n;
	ll arr[n];
	for(int i=1;i<=n;i++){
      cin>>arr[i];
      sum=sum+arr[i];
	}
	if(sum>=n){
	number=sum-n;
	cout<<number<<endl;
}
    else{
    	cout<<1<<endl;
    }
}


}