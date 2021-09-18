#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll     long long 
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

ll t;cin>>t;while(t--){
    ll j,n;cin>>n;ll a[n+1],i,c=0;
    for(i=1;i<=n;i++)cin>>a[i];
    for(i=1;i<=n;i++)
    {for(j=a[i]-i;j<=n;j+=a[i])
    { if(j>0)
    if(a[i]*a[j]==i+j&&i<j)
    c++;
    }}
    cout<<c<<endl;}


  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}