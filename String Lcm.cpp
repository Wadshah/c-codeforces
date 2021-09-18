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

for(cin>>t;t;t--){
		cin>>a>>b;p=a;q=b;
		while(1){
			if(p.length()==q.length()){
				if(p==q)cout<<p<<endl;
				else cout<<-1<<endl;
				break;
			}
			if(p.length()<q.length())p+=a;
			else q+=b;
		}
	}
  


  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}