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
freopen("outputf.in", "w", stdout);
#endif
}
int main(int argc ,char const *argv[]){
 clock_t begin =clock();  
 file_i_o();

 int n;
 cin>>n;
 vector<vector<int> >arr(n,vector<int>(n,0));
 for(int i=0;i<=n-1;i++){
 	for(int j=0;j<=n-1;j++){
 		char ch;
 		cin>>ch;
 		arr[i][j] = (ch=='.') ? 1 :0;
 	}
 }
 vector<vector<int>> dp(n,vector<int>(n,0));
 if(arr[n-1][n-1]==1) dp[n-1][n-1]=1;
 for(int i=n-2;i>=0;i--){
 if(arr[i][n-1] ==0) dp[i][n-1] = 0;
 else{
 	dp[i][n-1] +=dp[i+1][n-1];
 }
}
for(int i=n-2;i>=0;i--){
 if(arr[n-1][i] ==0) dp[n-1][i] = 0;
 else{
 	dp[n-1][i] +=dp[n-1][i+1];
 }
}
for(int i=n-2;i>=0;i--){
	for(int j=n-2;j>=0;j--){
 if(arr[i][j] ==0) dp[i][j] = 0;
 else{
 	dp[i][j] +=(dp[i+1][j]%mod+dp[i][j+1]%mod)%mod;
 }
}
}
cout<<dp[0][0];


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

