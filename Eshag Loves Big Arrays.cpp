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
cin>>t;
while(t--){
	int n,l;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];

	
sort(a,a+n);
		for(int i=0;i<n;i++)if(a[i]>a[0])l++;
		cout<<l<<endl;
}}

  


  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}