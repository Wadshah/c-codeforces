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
 	ll n,W,count=0,max=0;
 	cin>>n>>W;
 	int arr[n];
 	for(int i=1;i<=n;i++){
 		cin>>arr[n];
 	}
 	for(int i=1;i<=n;i++){
   if(arr[i]>max)
   	{max=arr[i];
  }
  else if(arr[i=max]){
  	count++;
  }
  }

cout<<count;
 }


  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}