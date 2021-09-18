#include<bits/stdc++.h>
using namespace std;

void file_i_o(){
	  #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main(){
  clock_t begin =clock();
  file_i_o();
  
 
int n,k;
cin>>n>>k;
vector<int> arr(n);
vector<int> dp(k+1,0);
for(int i=1;i<=n;i++)   
{
  cin>>arr[i];
}

for (int i=1;i<=k;i++){
  for(int val:arr){
    if(val>i) continue;
    if(dp[i-val]==0) dp[i] = 1;
  }
}
cout<<(dp[k] == 1 ? "First" :"Second");

  clock_t end   =clock();
   cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
}