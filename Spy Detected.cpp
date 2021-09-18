#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int j,n,t,f,h;
cin>>t;
while(t--)
{
cin>>n;
int a[n+5];
h=0;
for(j=1;j<=n;j++)
cin>>a[j];
for(j=1;j<=n;j++)
{
if(a[j]!=a[j+1]&&a[j]!=a[j+2]&&a[j]!=a[j-1])
{
    cout<<j<<endl;
  break;
}
}
 
}
}