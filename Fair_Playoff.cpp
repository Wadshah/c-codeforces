#include<bits/stdc++.h>
using namespace std;

void file_i_o(){
    #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main(){
  clock_t begin =clock();
  file_i_o();
  
int n,a,b,c,d;
  cin>>n;
  while(n--){
    cin>>a>>b>>c>>d;
    if(max(a,b)>min(c,d) && max(c,d)>min(a,b)) cout<<"YES\n";
    else cout<<"NO\n";

    
}



  clock_t end   =clock();

   cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
}