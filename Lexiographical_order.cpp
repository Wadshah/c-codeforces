#include<bits/stdc++.h>
using namespace std;

void file_i_o(){
	  #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}


void recursion(int x ,int n)
{if(x>n) return;

if(x!=0) cout<<x<<endl;

for(int i=(x==0) ? 1:0	; i<=9;i++){
	recursion(10*x+i,n);
}}

int main() {
	clock_t begin =clock();
	file_i_o();
	recursion(0,10000);
	clock_t end   =clock();
	cout<<"\n\nExecuted In "<<double(end -begin) / CLOCKS_PER_SEC;

}
