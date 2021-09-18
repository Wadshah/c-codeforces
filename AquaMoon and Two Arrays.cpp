#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll     long long int 
#define inf     1e18

const int N=1e5+5;

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
  int n;
  cin>>n;
  vector<int >a(n),b(n);
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int ans = 0;
  int ok = 0;
  for(int i=1;i<=n;i++){
    cin>>b[i];
    ans+=a[i]-b[i];
     if(a[i]<b[i]){
      ok+=a[i]-b[i];
     }
  }
  if (ans != 0){
    cout << "-1" << "\n";
    return;
  }
  cout << -ok << "\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      while (a[i] < b[i] && a[j] > b[j]){
        a[i]++;
        a[j]--;
        cout << j+1 << " " << i+1 << "\n";
      }
    }
    
  }

}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

