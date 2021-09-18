#include<bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

  int t;
  cin>>t;
  while(t--)
  {
  	int n,sum=0,max;
  	cin>>n;
  	vector<int> arr(n+2);
  	
  	for(int i=0;i<n+2;i++)
  	{
  		int a;
  		cin>>a;
  		arr[i]=a;
}
 max= *max_element(arr.begin(), arr.end());
     sort(arr.begin(),arr.end());
   for(int i=0;i<n+1;i++)
  	{
  		sum+=arr[i];
      
  		}

  		   cout<<sum;
  		for(int i=0;i<n;i++)
  	{
  		if (sum==max){
  			cout<<arr[i] ;
  		}
  		else{
  			cout<<-1;
  		}
       
   

  	}
  	  }
}

