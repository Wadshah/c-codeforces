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
	freopen("output.in", "w", stdout);
	#endif
	}
	int main(int argc ,char const *argv[]){
	 
	 file_i_o();

	 ll t;
	 cin>>t;
	 while(t--){
	 	string s;
	 	cin>>s;
	 	ll n=s.size();
	 	ll arr[n+1],v;
	    for(ll i=0;i<n;i++){
	 		 v=s[i]-'0';
	 		arr[i]=v;
	 	}
	 	ll sum=0;
	 	for(ll i=0;i<n;i++){
	 		if(arr[i]!=arr[i+1]){
	 			sum++;
	 		}

	 	}
	 	ll zero=0,one=0;
	    
	    sum=sum-1;
	    
	 	if(n==3){
	    for(ll i=0;i<n;i++){
	    	if(s[i]=='0'){
	    		zero++;
	    	}
	    	else{
	    		one++;
	    	}
	    }
	    if(zero-one==1){
	    	cout<<"2"<<endl;
	    }
	    else if(one-zero==1){
	    	cout<<"1"<<endl;
	    }
	    else if(one-zero==3){
	    	cout<<"0"<<endl;
	    }
	    else{
	    	cout<<"1"<<endl;
	    }
	 	}
	 	else{
	 	if(sum>=2){
	 		cout<<"2"<<endl;
	 	}
	 	else if(sum==0){
	 		if(s[0]=='0'){
	 			cout<<1<<endl;
	 		}
	 		else {
	 			cout<<0<<endl;
	 		}
	 	}
	 	else if(sum==1){
	 		cout<<1<<endl;
	 	}
	}
	 }


	return 0;

	}

