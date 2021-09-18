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

 int n;
 cin>>n;
 vector<int> arr(n);
 for(int i=1;i<=n;i++){
  cin>>arr[i];
 } 
 vector<int> dp(n,1);
 for(int i=1;i<=n-1;i++){
  for(int j=0;j<=i-1;j++){
    if(arr[i]>arr[j]){
      dp[i]=max(dp[i],dp[j]+1);
    }
  }
 }
int ans =-12;
for(int i=0;i<=n-1;i++){
ans=max(ans,dp[i]);
}
cout<<ans;

  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}