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
  cin >> t;
  for (int tt = 0; tt < t; tt++)
  {
    string s;
    cin>>s;
    ll n=s.size();

    for (int i = 0; i < n; i++)
    {
      if(s[i]=='a')
      {
        s[i]='b';
      }
      else
      {
        s[i]='a';
      }

      i++;

      if (s[i] == 'z')
      {
        s[i] = 'y';
      }
      else
      {
        s[i] = 'z';
      }
    }
    cout<<s<<"\n";
  }
	
	  
	
	
	  #ifndef ONLINE_JUDGE
	  clock_t end   =clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	  #endif
	  return 0;
	
	}