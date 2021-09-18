#include<bits/stdc++.h>
using namespace std;

int total=0;
void recursion(int a,int n,string osf){
    if(a==n){
        
    total=total+1;
    }
     if(a>n){
    return;
  }
    for(int i=1;i<=n;i++)
    recursion(a+i, n,osf +"i");
    
   

}

int main() {
 
    #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
recursion(0,3,"");
cout<<total;

return 0;

}