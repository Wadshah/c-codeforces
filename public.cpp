#include<bits/stdc++.h>
#include<iostream>
#include <math.h>
#include <algorithm>

using namespace std;

#define ll     long long int 
#define inf     1e18

const int N=1e5+5;

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
int p,q;
cin>>p>>q;
int n;
n=p*q;
cout<<"n=>p*q="<<n<<endl;
int phi;
phi=(p-1)*(q-1);
cout<<"phi=>(p-1)*(q-1)="<<phi<<endl;
int e = 7,track;
    while (e < phi)
    {
        track =__gcd(e, phi);
        if (track == 1)
            break;
        else
            e++;
    }
int d1 = 1 / e;
int d = fmod(d1, phi);
cout<<"d="<<d<<endl; 


#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

