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
 	ll a,b;
 	cin>>a>>b;
  if(a==b){
    cout<<0<<endl;
  }
  else{
 	if(a<b){
 		swap(a,b);
 	}
 	ll d,c;
 	 d=a%b;
 	 if(a%2==0){
 	 c=(a/2-1);}
 	 else{
 	 	c=a/2;
 	 }
 	if(c<=a&&c>=b){
 		cout<<c<<endl;
 	}
 	else{
 		cout<<d<<endl;
 	}
 }}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

