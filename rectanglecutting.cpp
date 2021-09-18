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

 int a,b;
 cin>>a>>b;
 vector<vector<int>>dp(a+1,vector<int>(b+1,INT_MAX));

 for(int i=0;i<=a;i++){
 	for(int j=0;j<=b;j++){
 		if(i==j) dp[i][j]=0;
 		else{
 			for(int k=1;k<=i-1;k++){
 				dp[i][j]=min(dp[i][j],1+dp[k][j]+dp[i-k][j]);
 			}
 			for(int k=1;k<=j-1;k++){
 				dp[i][j]=min(dp[i][j],1+dp[i][k]+dp[i][j-k]);
 			}

 		}
 	}
 }
 cout<<dp[a][b];

#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

