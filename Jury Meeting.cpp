#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll     long long int 
#define inf     1e18
#define mod    998244353

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

ll cnt(ll x){
	ll r=0;
	for(ll i=0;i<n;i++){
		if(a[i]==x){
			++r;
		}
	}
	return r;
}
int main(int argc ,char const *argv[]){
 clock_t begin =clock();  
 file_i_o();
fact[0] = fact[1] = 1;
	for (ll i = 2; i <= 200003; i++) {
		fact[i] = (i * fact[i - 1]) % mod;
	}

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		ll y =cnt(a[n-1]);
		ll z =cnt(a[n-1]-1);

		if(y>=2){
			cout<<fact[n]<<endl;
		}
		ll r=1;
		for(ll i=n;i<y+z;i--){
			r=(r*i)%mod;

		}
		r=(r*(fact[y+z]-fact[y+z-1]+mod))%mod;
		cout<<r<<endl;
	}



#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

	