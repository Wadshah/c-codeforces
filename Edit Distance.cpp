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

 string s1,s2;
 cin>>s1>>s2;
 vector<vector<ll>>dp(s1.size()+1, vector<ll>(s2.size()+1,0));
dp[0][0]=0;
for(ll i=1;i<=s1.size();i++){
	dp[i][0]=i;
}
for(ll i=1;i<=s2.size();i++){
	dp[0][i]=i;
}
for(ll i=1;i<=s1.size();i++){
	for(ll j=1;j<=s2.size();j++){
		if(s1[i-1]==s2[j-1]){
			dp[i][j]=dp[i-1][j-1];
		}
		else{
			dp[i][j]=1+min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j]);
		}
	}
}
cout<<dp[s1.size()][s2.size()];


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

