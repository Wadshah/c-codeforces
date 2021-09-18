#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,a[305],ans=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++) scanf("%d",&a[i]);
    for(int i=1;i<=m;i++)
      for(int j=i+1;j<=m;j++)
        if(a[i]<a[j]) ans++;
    cout<<ans<<endl; 
  }
  return 0;
}