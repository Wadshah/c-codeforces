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

 int t;
 cin>>t;
 while(t--){
 	int n,k;
 	cin>>n>>k;
 	string s;
 	cin>>s;
 	int ans=0,last= -(1e6) ;
 	for(int i=0;i<n;i++){
 		if(s[i]=='0') continue;
 		if(i-last<=k+1){
 			last=min(last+k,i+1);
 		}
 		else{
 			ans++;
 			last = i +1;
 		}
 	}
 	cout<<ans<<endl;
 }


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

