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
int main(int argc ,char const *argv[]){
 clock_t begin =clock();  
 file_i_o();

 ll n;
 cin>>n;
 set<ll> result;
 while(n--){
 	ll x;
 	cin>>x;
 	if(result.size()==0){
 	result.insert(x);
    continue;
 }
 vector<ll> temp;
 for(auto it =result.begin(); it!=result.end();it++)
   {
   	temp.push_back(*it +x);
   } 	
result.insert(x);
 for(ll i=0;i<temp.size();i++){
 	result.insert(temp[i]);
 }
}
 cout<<result.size()<<endl;
  for(auto it =result.begin(); it!=result.end();it++)
   {
   	cout<<*it <<" ";
   } 	
  
 


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

