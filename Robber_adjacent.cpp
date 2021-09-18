#include<bits/stdc++.h>
using namespace std;

void file_i_o(){
	  #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
void recursion(int n){
	
	vector<int> dp(n);
	dp[1]=9;
	dp[2]=8;
	dp[3]=9;
	for(int i=4;i<=n;i++){
		dp[i]=i-3;
	}
	for(int i=1;i<=n;i++){
		cout<<dp[i]%10;
	}
 cout<<endl;
}


int main() {

	clock_t begin =clock();
	file_i_o();
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
	recursion(a);
}
	clock_t end   =clock();
	cout<<"\n\nExecuted In "<<double(end -begin) / CLOCKS_PER_SEC;

}