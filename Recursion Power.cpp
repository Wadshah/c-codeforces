#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type ,greater<int>,rb_tree_tag ,tree_order_statistics_node_update> pbds;


	int recursion(int a ,int b)
	{
		if(b==0)	return 1;
		
		if(b==1)	return a;
		
         int temp = recursion(a,b/2);

         if(b%2==0)
         {
         	return temp*temp;
         }
         else
         {
         	return a*temp*temp;
         }
	}
	int main()
	{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
		cout<<recursion(3,4);
	}


