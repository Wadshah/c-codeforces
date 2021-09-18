#include<bits/stdc++.h>
using namespace std;

int total=0;

 void recursion(int i, int j, int n ,int m,string osf)
 {
  if(i==n&&j==m)
  {
    total+=1;
    cout<<osf<<endl;
    return;
  }
  if(i>n or j>m){
    return;
  }
  recursion(i+1,j,n,m,osf+"R");
  recursion(i,j+1,n,m,osf+"D");
  recursion(i+1,j+1,n,m,osf+"$");
 }

int main() {
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

recursion(0,0,3,3,"");
cout<<total;

}