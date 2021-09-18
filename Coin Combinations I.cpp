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

 int n,x;
 cin>>n>>x;
 vector<int>dp(x+1,0);
 dp[0]=1;
 vector<int> coins(n);
 for(int i=0;i<=n-1;i++)
 	cin>>coins[i];
 for(int i=1;i<=x;i++){
 	for(int j=0;j<=n-1;j++){
 		if(coins[j]>i) continue;
 		dp[i]=(dp[i]+dp[i-coins[j]])%mod;
 	}
 }
 cout<<dp[x]%mod;
 	
 


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

