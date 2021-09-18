#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll     long long int 
#define inf     1e18
#define mod    1000000007

const int N=1e5+5;

void file_i_o(){

ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    #ifndef ONLINE_JUDGE
freopen("inputf.in", "r", stdin);
freopen("output.in", "w", stdout);
#endif
}
int main(int argc ,char const *argv[]){
 clock_t begin =clock();  
 file_i_o();

int t;
cin>>t;
while(t--){
	int n,s;
	cin>>n>>s;
	if(n==1){
		cout<<s<<endl;
		
	}
	else if(s==1){
		cout<<0<<endl;
		
	} 
	else if(n==2){
		cout<<s/n<<endl;
		
	}
	else{
	if(n%2==0){
		int a=(n/2)-1;
		int d=n-a;
		cout<<s/d<<endl;
	}
	else{
		int a=(n+1)/2;
		cout<<s/a<<endl;
	}}

}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

