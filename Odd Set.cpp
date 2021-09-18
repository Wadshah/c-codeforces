#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll     long long int 
#define inf     1e18


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
	int n,sum=0;
	cin>>n;
	int arr[2*n];
	for(int i=1;i<=2*n;i++){
		cin>>arr[i];
	     sum+=arr[i];
	}
	if(sum%2==0&&n%2==0){
		cout<<"Yes";
		break;
	}
	if(sum%2!=0&&n%2!=0){
		cout<<"Yes";
	}
	if(sum%2!=0&&n%2==0){
		cout<<"No";
	}
    if(sum%2==0&&n%2!=0){
		cout<<"No";
	}
}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

