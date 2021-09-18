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

 int t, n;
	string str;
	cin >> t;
 
	while(t--) {
 
		cin >> n >> str;
 
		int i=n-1;
 
		while(i>=0) {
			if(str[i]!=')') break;
			i--;
		}
 
		if(i+1 >= n-i-1) cout << "No\n";
		else cout << "Yes\n";
	}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

