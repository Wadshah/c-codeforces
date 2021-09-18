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

 ll t;
 cin>>t;
 while(t--){
 	ll n,m;
    cin>>n>>m;
    vector<ll >n1(n);
     vector<ll >m1(m);
     for(ll i=0;i<n;i++){
     	cin>>n1[i];
     }
      for(ll i=0;i<m;i++){
     	cin>>m1[i];
     }
     ll count=0;
     for(ll i=0;i<n;i++){
     	for(ll j=0;j<m;j++){
     		if(n1[i]==m1[j]){
     			count++;
     		}
     	}
     }
     cout<<count<<endl;
 }



#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

