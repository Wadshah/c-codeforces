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
  cin >> t;
  for (int tt = 0; tt < t; tt++)
  {
    int n;
    cin>>n;
 
    int a[n];
 
    for (int i = 0; i < n; i++)
    {
        a[i]=i+1;
    }
 
    if(n%2==0)
    {
        for (int i = 0; i < n; i+=2)
        {
            swap(a[i],a[i+1]);
        }
        
    }
    else
    {
        for (int i = 0; i < n-1; i += 2)
        {
            swap(a[i], a[i + 1]);
        }
 
        swap(a[n-2],a[n-1]);
    }
 
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
 
    cout<<"\n";
    
    
}

  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;


}