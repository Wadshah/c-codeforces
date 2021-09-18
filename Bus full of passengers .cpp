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
	ll n,m,q,sum=0,a=0;
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		if(s=="+"){
			sum++;
		}
		else{
			sum--;
		}
		int d;
		cin>>d;
		a=max(sum,a);
		if(sum>m||sum<0){
			cout<<"Inconsistent"<<endl;
               break;
		}
		
	}
	if(a<m){
	cout<<"Consistent"<<endl;
}
}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

