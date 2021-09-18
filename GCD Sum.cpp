#include<bits/stdc++.h>
#include<iostream>


using namespace std;

#define ll     long long  int
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
	long long  n;
	cin>>n;
	while(1){
	long long  z=n,sum=0;
	while(z!=0){
    sum=sum+(z%10);
    z=z/10;
	}
	if(__gcd(n,sum)>1){
		cout<<n<<endl;break;
	}
	n++;
}}



  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}