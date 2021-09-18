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
cout<<t;
while(t--)
	{
	    int n;
		cin>>n;
		long long fl=0,x,sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			sum+=x;
			if(sum<i)fl=1;
			sum-=i;
		}
		cout<<(fl?"NO":"YES")<<endl;
	}


  


  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}