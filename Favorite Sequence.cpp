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

int t;
cin>>t;
while(t--){
	int n,j,i;
	int arr[n];
	for(int i=1;i<=n;i++){
	cin>>arr[i];}
	for( i=0,j=n-1;i<j;j--,i++){
			cout<<arr[i]<< ' '<<arr[j]<<' ';
		}
		if(i==j)cout<<arr[i]<<endl;
		else cout<<endl;
}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

