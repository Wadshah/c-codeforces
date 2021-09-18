#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

     #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


    ll t;
    cin>>t;
    while(t--){
ll n;
cin>>n;
ll a[n+2],i;
for(i=0;i<n+2;i++){
    cin>>a[i];
}
ll sum=0;
sort(a,a+n+2);
for(i=0;i<=n;i++){
    sum+=a[i];
}
//exclude one element once &check
ll ind=-1;
for(i=0;i<=n;i++){
   sum-=a[i];
   if(sum==a[n+1]||sum==a[i]){
       ind=i;
       break;
   }
   sum+=a[i];
}

if(ind==-1)
{cout<<-1<<endl;continue;}
for(i=0;i<=n;i++){
    if(i!=ind)
    cout<<a[i]<<" ";
}
cout<<endl;
    }
}
 
