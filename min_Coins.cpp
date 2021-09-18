#include<bits/stdc++.h>
using namespace std;

void file_i_o(){
	  #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int inf=10000000000;

int dynamic(int *dp,int n,int sum,int *coins){
    int result =inf;
	if(sum==0) return 0;
	if(sum<0) return inf;
	if(sp[sum] !=1) return dp[sum];
	for(int i=1;i<=n-1;i++){
		int recursion =dynamic(dp,n,sim-coin[i],coins);
        if(recursion == inf){
        	continue; 
}
         result =min(result ,1+recursion);
}
        return dp[sum] =result;
	  

	  }


int main(){
  file_i_o();
  clock_t begin =clock();
   vector<int> dp;
   int coins[4]=
   dynamic(dp,4,0,)
  

  clock_t end   =clock();
  cout<<"\n\nExecuted In "<<double(end -begin) / CLOCKS_PER_SEC;
}