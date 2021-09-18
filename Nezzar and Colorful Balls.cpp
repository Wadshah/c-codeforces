#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll     long long int 
#define inf     1e18

const int N=1e5+5;

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

 int t;
 cin>>t;
 while(t--){
 	int n;
 	cin>>n;
 	 unordered_map<int ,int>mp;
 	 int ans=1;
 	 for(int i=1;i<=n;i++){
 	 	int x;
 	 	cin>>x;
 	 	mp[x]++;
 	 	ans=max(ans,mp[x]);
 	 }
 	 cout<<ans<<endl;

 }


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

