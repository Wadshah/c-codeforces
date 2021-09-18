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

int n,m;
cin>>n>>m;
vector<int >arr(n);
for(int i=0;i<=n-1;i++){
	cin>>arr[i];
}
vector<vector<ll> dp(m+1,vector<int>n,0);
for(int i=0;i<=n-1){
	if(i==0){
		if(arr[i]!=0) dp[arr[i]][i]=1;
		else{
			for(int j=1;j<=m;j++){
				dp[j][i]=1;
			}
		}
		continue;
	}
	if(arr[i]!=0){
		dp[arr[i]][i]=((arr[i]-1>0)?dp[arr[i]-1]%mod:0)+dp
	}
}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

