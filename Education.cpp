#include<bits/stdc++.h>
using namespace std;
int main() {
 
    #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
   
   int t;
   cin>>t;
   while(t--){
  int n,c,total;
  cin>>n>>c;
  vector<int> cost(n);
  vector<int> course(n-1);
  for(int i=1;i<=n;i++){
     int a;
    cost.push_back(i);
  }
  cout<<n;
  
   for(int i=1;i<n;i++){
     
    cout<<cost[i]<<endl;
  }
for(int i=0;i<n;i++){
     
   total=cost[i]-course[i];
   cout<<total;
   if(total>=c)
   {
    cout<<i;
   }
}
 }
 }