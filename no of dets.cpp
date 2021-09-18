#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type ,greater<int>,rb_tree_tag ,tree_order_statistics_node_update> pbds;


void recursion(int *arr,int i ,int n,string osf)
{
    if(i==n) {
        cout<<"["<<osf<<"]\n";
        return;
    }
    recursion(arr,i+1,n,osf + to_string(arr[i]) + " ");
    recursion(arr,i+1,n,osf);

}

int main() {
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int n;
cin>>n;
int *arr = new int[n]; 
for(int i=0;i<=n;i++)
{
    cin>>arr[i];
}
recursion(arr,0,n,"");

}
