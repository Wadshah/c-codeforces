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

 int n;
    cin>>n;
    vector<int> arr(n,0);
 int q;
 cin>>q;
 while(q--){
    
    int l,r;
    cin>>l>>r;
    
    arr[l]++;
    if(r+1<n){
        arr[r+1]--;
    }}
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }




#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

