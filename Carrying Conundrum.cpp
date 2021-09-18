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
int main(){
 clock_t begin =clock();  
 file_i_o();

int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int n=s.size();
		int a=0;
		int b=0;
		for(int i=0; i<n; i++) {
			if(i%2) a=a*10+s[i]-'0';
			else b=b*10+s[i]-'0';
		}
		cout<<(a+1)*(b+1)-2<<endl;
	}

#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

