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

string s;
cin>>s;
while(s[0]!='0'){
vector<ll> dp(s.size(),0);
dp[0]=dp[1]=1;
if((10*(s[0]-'0'))+(s[1]-'0')<=26) dp[1]+=1;
for(int i=2;i<=s.size();i++){
	dp[i]=dp[i-1]+((10*(s[i-1]-'0')+(s[i]-'0')<=26)?dp[i-2]:0);
}
cout<<dp[s.size()-1];
}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

