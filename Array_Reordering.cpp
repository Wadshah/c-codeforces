#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void file_i_o(){
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main(){
  
  file_i_o();

int t;
cin>>t;

while(t--){
int n; 
cin>>n; 
int ans=0;
int  a[n];
for(int i=1;i<=n;i++){
    cin>>a[i];
}for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
 
if(__gcd(a[i],2*a[j])>1||__gcd(a[j],2*a[i])>1)ans++;

}
}
         

cout<<ans-1<<endl;
}

}