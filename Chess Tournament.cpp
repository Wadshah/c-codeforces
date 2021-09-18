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
string mat [55];
 int n;
 cin>>n;
 string s;
 cin>>s;
 ll cnt[3]={0};
 for(int i=0;i<n;i++){
  ++cnt[s[i]-'0'];
 }
 for(ll i=0;i<n;i++){
  mat[i]=string(n,'=');
  mat[i][i]='x';
 }
 if(cnt[2]==1||cnt[2]==2){
  cout<<"NO"<<'\n';
  return 0;
 }
 else if (cnt[2]>=3){
  vector<ll> inds;
  for(ll i=0;i<n;i++){
    if(s[i]=='2') inds.push_back(i);

  }
  
 }



#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

