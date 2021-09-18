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
        int n;
        cin >> n;

        ll x[n];
        ll y[n];
        int p1 = 0, p2 = 0;
        ll a, b;
        for (int i = 0; i < n * 2; i++)
        {
            cin >> a >> b;
            
            if (b == 0)
            {
                x[p1] = abs(a);
                p1++;
                
            }
            if (a == 0)
            {
                y[p2] = abs(b);
                p2++;
            }
        }

        sort(x, x + n);
        sort(y, y + n);

        double ans = 0;

        for (int i = 0; i < n; i++)
        {
            
            ans += sqrt(x[i] * x[i] * 1.0 + y[i] * y[i] * 1.0);
        }
        cout << setprecision(15) << ans << "\n";
    }
  


  #ifndef ONLINE_JUDGE
  clock_t end   =clock();
  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
  #endif
  return 0;

}