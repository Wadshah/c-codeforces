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
		ll attack, health, n;
		cin >> attack >> health >> n;

		ll monh[n];
		ll mona[n];

		int m=-1;
		int pos=-1;
		for (int i = 0; i < n; i++)
		{
			cin >> mona[i];
			if (mona[i] > m)
			{
				m = mona[i];
				pos = i;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cin >> monh[i];
		}

		for (int i = 0; i < n ; i++)
		{
			if(pos==i)
			{
				continue;
			}
			if (health < 1)
			{
				break;
			}
			ll rounds = ceil(1.0 * monh[i] / attack * 1.0);
			health = health - (mona[i] * rounds);
		}

		if (health < 1)
		{
			cout << "NO\n";
			continue;
		}

		//cout<<health<<"\n";
		ll roundmon = ceil(1.0 * monh[pos] / attack * 1.0);
		ll roundhero = ceil(1.0 * health / mona[pos] * 1.0);

		if (roundmon > roundhero)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
	}
  


  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}