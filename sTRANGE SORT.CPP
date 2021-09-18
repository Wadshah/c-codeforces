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
freopen("outputf.in", "w", stdout);
#endif
}
int main(){
 clock_t begin =clock();  
 file_i_o();

 int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b.begin(), b.end());
		int ans = 0;
		while(a != b){
			for(int i = (ans & 1); i + 1 < n; i += 2){
				if(a[i] > a[i + 1])
					swap(a[i], a[i + 1]);
			}
			ans++;
		}
		cout << ans << "\n";
	}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

