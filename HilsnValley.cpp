#include<bits/stdc++.h>
using namespace std;

void file_i_o(){
	  #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main(){
  file_i_o();
  clock_t begin =clock();
  int t;
  cin>> t;
  while (t--){
int n,hill=0,valley=0;
cin>>n;
vector<int> v(n);
for(int i=1;i<=n;i++){
  cin>>v[i];
}
for(int i=1;i<=n;i++){
  if(v[i]<v[i+1] && v[i]<v[i-1] &&v[i]!=1 &&v[i]!=n)
  {
    valley++;
    cout<<i<<endl;
  }
   if(v[i]>v[i+1] && v[i]>v[i-1] &&v[i]!=1 &&v[i]!=n)
  {
    hill++;
    cout<<i<<endl;
  }

}
cout<<hill<<"  "<<valley<<endl;;

  }

  clock_t end   =clock();
  cout<<"\n\nExecuted In "<<double(end -begin) / CLOCKS_PER_SEC;
}