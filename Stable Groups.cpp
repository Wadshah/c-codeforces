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

long long n,k,x,i,j=0,a[250000],b[230000];
cin>>n>>k>>x;
	for(i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
for(int i=1;i<n;i++){
 if(a[i]-a[i-1]>x){
 b[j++]=a[i]-a[i-1];}}

 ll ans =j+1;
 sort(b,b+j);
     
  	#ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}