#include<bits/stdc++.h>
using namespace std;

void file_i_o(){
	  #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

int main(){
     	file_i_o();	file_i_o();
 clock_t begin =clock();
	int t;cin>>t;
	while(t--){
    int n;
	cin>>n;
	if(n==1) 
    cout<<9;
	else{
	cout<<9;
	for(int i=0+8;i<n+7;i++)
		cout<<i%10;}
	cout<<"\n";}
		clock_t end   =clock();
	cout<<"\n\nExecuted In "<<double(end -begin) / CLOCKS_PER_SEC;
}