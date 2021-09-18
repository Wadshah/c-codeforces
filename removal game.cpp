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

int n;
cin>>n;
vector<int >arr(n);
for(int i=0;i<=n-1;i++){
  cin>>arr[i];
}
vector<vector<ll>> dp(n,vector<ll>(n,0));
for(int len =1;len<=n;len++){
  for(int i=0;i+len<=n;i++){
    int j=i+len-1;
    ll x,y,z;
    x=(i+2<=j)?dp[i+2][j]:0;
    y=(i+1<=j-1)?dp[i+1][j-1]:0;
    z=(i<=j-2)?dp[i][j-2]:0;
    
    dp[i][j]=max(arr[i]+min(x,y),arr[j]+min(y,z));

  }
}
cout<<dp[0][n-1];


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

