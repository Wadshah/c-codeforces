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

int t;
cin>>t;
while(t--){
	int n;
	int a[n];
	   int ma=INT_MIN;
        int mi=INT_MAX;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	   ma=max(ma,a[i]);
            mi=min(mi,a[i]);
    }
    int mid=n/2,sum=0;
    if(arr[mid]<ma[i]){
    	sum=n-ma[i];
    }
    else{
    	sum=ma[i];
    }
    cout<<sum;



  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}