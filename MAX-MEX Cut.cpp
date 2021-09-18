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
 clock_t begin =clock();  
 file_i_o();

int t;
cin>>t;
while(t--){
	string s,d;
	int n;
	cin>>n;
cin>>s>>d;
int sum=0;
for(int i=1;i<=n;i++){
	if(s[i]==d[i]=='1'and s[i+1]==d[i+1]=='0'||s[i]==d[i]=='0'and s[i+1]==d[i+1]=='1')
		i++;
	sum=sum+2;
	}
	if(s[i]=='1' and d[i]=='0'){
		sum+=2;
	}
	else if(s[i]=='0' and d[i]=='1'){
		sum+=2;
	}
	else if(s[i]=='0' and d[i]=='0'){
		sum+=1;
	}
	else if(s[i]=='1' and d[i]=='1'){
		sum+=0;
	}
	

cout<<sum<<endl;
}


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

