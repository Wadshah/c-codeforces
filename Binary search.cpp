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
  int n,sum=0;
  int arr[]={};
  for(int i=1;i<=n;i++){
    cin>>arr[n];
    sum=sum+arr[n];
  }
  if(sum%n!=0){
    cout<<-1<<endl;
  }
  int c,count=0;
  c=sum/n;
  for(int i=0;i<=n;i++){
    if(arr[i]>c){
      count++;
    }
  }
  cout<<count<<endl;
}


  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}