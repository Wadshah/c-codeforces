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
 clock_t begin =clock();  
 file_i_o();

string s1,s2;
cin>>s1>>s2;
int n=s1.size() ,m=s2.size();
vector<vector<ll> > dp(n+1,vector<ll> (m+1,0)); 
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		if(s1[i-1]==s2[j-1]){
			dp[i][j]=1+dp[i-1][j-1];
		}
		else{
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
}
cout<<dp[n][m];
  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}