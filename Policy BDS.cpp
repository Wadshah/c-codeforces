#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type ,greater<int>,rb_tree_tag ,tree_order_statistics_node_update> pbds;

int main() {
	#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

pbds arr;
for(int i=1;i<=10;i++)
{
	arr.insert(i);
}
cout<<arr.order_of_key(5)<<endl;
cout<<*arr.find_by_order(4)<<endl;
return 0;

}