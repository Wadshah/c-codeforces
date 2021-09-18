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
int main(){
 clock_t begin =clock();  
 file_i_o();
{


int n;
cin>>n;
vector<int>dp(n+1,0);
dp[0] =dp[1]=1;
for(int i=2;i<=n;i++){
	for(int j=1;j<=6;j++){
		if(j>i) break;
		dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
	}

}	cout<<dp[n];

return 0;

}



#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

