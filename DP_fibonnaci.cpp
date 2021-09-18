#include<bits/stdc++.h>
using namespace std;

void file_i_o(){
	  #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

int fib(int n){
	if(n==0 or n==1) return 1 ;
	vector<int> dp(n);
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];

}


int main() {
	clock_t begin =clock();
	file_i_o();
     cout<<fib(6)<<endl;
    clock_t end   =clock();
	cout<<"\n\nExecuted In "<<double(end -begin) / CLOCKS_PER_SEC;

}