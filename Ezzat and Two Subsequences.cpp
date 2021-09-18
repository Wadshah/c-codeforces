#include<bits/stdc++.h>
#include<iostream>

using namespace std;



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
 cout.precision(10);
 while(t--){
 	int n;
 	cin>>n;
long long a,m=-1e9-1,s=0;
 	for(int i=1;i<=n;i++){
 		cin>>a; 
    s=s+a;
        m=max(m,a);	
 	}
 	s=s-m;
 	cout<<m+1.0*s/(n-1)<<endl;
 	
 }


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}


